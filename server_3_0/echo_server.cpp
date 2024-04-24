#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>
#include <ctype.h>
#include <arpa/inet.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>
#include <filesystem>
#include <algorithm>
#include <pthread.h> // 添加 pthread 头文件
#include <netinet/in.h> // 添加 sockaddr_in 头文件
#include <cstdlib> // 添加 cstdlib 头文件
#include <memory>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstring>
#include <stdexcept>
#include "epoll_server.h"
#include "thread_poll.h"
using namespace std;
using namespace std::filesystem;

#define SERVER_PORT 8080
#define MAX_EVENTS 512
#define NUM_THREADS 4

string getTime();
void handleClient(int clientSock, ThreadPool& threadPool, EpollServer& epollServer);
void doHttpResponse(int clientSock, string filePath);
void sendHeader(int clientSock);
void badRequest(int clientSock);// 400 Bad Request
void notFound(int clientSock);// 404 Not Found
void notImplemented(int clientSock);// 501 Not Implemented
void badGateway(int clientSock);//502 Bad Gateway
void getFile(int clientSock, string filePath);

struct ThreadArgs {
	EpollServer* epollServer;
	int fd;
};

int main() {
	// 创建线程池
	ThreadPool threadPool(4);

	// 创建 EpollServer 实例
	EpollServer epollServer(512);

	// 创建服务器套接字
	int serverSock = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSock < 0) {
		std::cerr << "Failed to create socket" << std::endl;
		return 1;
	}

	// 绑定地址和端口
	struct sockaddr_in serverAddr;
	bzero(&serverAddr, sizeof(serverAddr));
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	serverAddr.sin_port = htons(SERVER_PORT);
	if (bind(serverSock, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
		std::cerr << "Failed to bind socket" << std::endl;
		close(serverSock);
		return 1;
	}

	// 监听连接
	if (listen(serverSock, 128) < 0) {
		std::cerr << "Failed to listen on socket" << std::endl;
		close(serverSock);
		return 1;
	}

	std::cout << "等待客户端连接" << std::endl;

	// 将服务器套接字添加到 epoll 实例中，监听连接事件
	if (!epollServer.AddFd(serverSock, EPOLLIN | EPOLLET)) {
		std::cerr << "Failed to add server socket to epoll" << std::endl;
		close(serverSock);
		return 1;
	}

	while (true) {
		// 等待事件发生
		int eventCount = epollServer.Wait();
		if (eventCount < 0) {
			std::cerr << "epoll_wait failed" << std::endl;
			break;
		}

		// 处理事件
		for (int i = 0; i < eventCount; ++i) {
			int fd = epollServer.GetEventFd(i);


			if (fd == serverSock) {
				// 新客户端连接
				struct sockaddr_in clientAddr;
				socklen_t clientAddrLen = sizeof(clientAddr);
				int clientSock = accept(serverSock, (struct sockaddr*)&clientAddr, &clientAddrLen);
				if (clientSock < 0) {
					std::cerr << "Failed to accept client connection" << std::endl;
					continue;
				}
				string currentTime = getTime();
				std::cout << "**************************" << std::endl << "time : " << currentTime << std::endl;

				// 将新客户端套接字添加到 epoll 实例中，监听读事件
				if (!epollServer.AddFd(clientSock, EPOLLIN | EPOLLET)) {
					std::cerr << "Failed to add client socket to epoll" << std::endl;
					close(clientSock);
					continue;
				}
			}
			else {
				// 已连接客户端有数据可读
				// 将客户端套接字交给线程池处理
				threadPool.Enqueue(handleClient, fd, std::ref(threadPool), std::ref(epollServer));
			}
		}
	}

	close(serverSock);
	return 0;
}

string getTime() {
	time_t t = time(nullptr);
	struct tm* now = localtime(&t); // 把毫秒转换为日期时间的结构体

	stringstream timeStr;

	// 以下依次把年月日的数据加入到字符串中
	timeStr << now->tm_year + 1900 << "/";
	timeStr << now->tm_mon + 1 << "/";
	timeStr << now->tm_mday << "/ ";
	timeStr << now->tm_hour << ":";
	timeStr << now->tm_min << ":";
	timeStr << now->tm_sec;

	return timeStr.str();
}

void handleClient(int clientSock, ThreadPool& threadPool, EpollServer& epollServer) {
	// 读取客户端请求数据
	char buffer[1024];
	ssize_t bytesRead = read(clientSock, buffer, sizeof(buffer));
	if (bytesRead <= 0) {
		// 读取失败或客户端关闭连接
		close(clientSock);
		return;
	}

	// 处理客户端请求
	std::string request(buffer, bytesRead);
	std::string requestedUrl;
	std::string requestedFilePath = "../html_docs";

	// 解析客户端请求
	size_t i = 0;
	if (request.substr(0, 3) == "GET") {
		// 处理 GET 请求
		i = request.find(' ') + 1;
		size_t j = request.find(' ', i);
		requestedUrl = request.substr(i, j - i);
		requestedFilePath += requestedUrl;

		// 执行 HTTP 响应
		std::cout << "Requested file path: " << requestedFilePath << std::endl;
		doHttpResponse(clientSock, requestedFilePath);
	}
	else {
		// 处理非 GET 请求，响应客户端 400 Bad Request
		std::cerr << "***400***" << std::endl;
		badRequest(clientSock);
	}

	// 重置 EPOLLONESHOT 事件，以便下次有数据到达时重新触发
	if (!epollServer.ModFd(clientSock, EPOLLIN | EPOLLET | EPOLLONESHOT)) {
		std::cerr << "Failed to modify client socket event" << std::endl;
	}

	// 关闭客户端套接字
	close(clientSock);
}

void doHttpResponse(int clientSock, string filePath) {

	try {
		// 使用 std::filesystem::status 函数获取文件状态
		file_status status = std::filesystem::status(filePath);
		sendHeader(clientSock);
		// 检查文件状态
		if (exists(status) && is_regular_file(status)) {
			getFile(clientSock, filePath);

			cout << "Content size: " << file_size(filePath) << endl;
		}
		else {
			cout << "***404***" << endl;
			notFound(clientSock);
		}
	}
	catch (const exception& ex) {//502
		cout << "***502***" << endl;
		cerr << "发生异常: " << ex.what() << endl;
		badGateway(clientSock);
	}
	return;
}
// ***400**
void badRequest(int clientSock) {
	string filePath = "../html_docs/400.html";
	getFile(clientSock, filePath);
	return;
}
// ****404***
void notFound(int clientSock) {
	string filePath = "../html_docs/404.html";
	getFile(clientSock, filePath);
	return;
}
// ***501***
void notImplemented(int clientSock) {
	string filePath = "../html_docs/501.html";
	getFile(clientSock, filePath);
	return;
}
// ***502***
void badGateway(int clientSock) {
	string filePath = "../html_docs/502.html";
	getFile(clientSock, filePath);
	return;
}

void sendHeader(int clientSock) {
	string header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\nConnection: keep-alive\r\nAccess-Control-Allow-Origin: *\r\n\r\n";
	send(clientSock, header.c_str(), header.length(), 0);
}

void getFile(int clientSock, string filePath) {
	int fd = open(filePath.c_str(), O_RDONLY);
	if (fd == -1) {
		std::cerr << "Failed to open file: " << filePath << std::endl;
		// 发送 404 页面
		return;
	}

	// 获取文件大小
	struct stat fileInfo;
	if (fstat(fd, &fileInfo) == -1) {
		perror("Failed to get file size");
		close(fd);
		// 发送 404 页面
		return;
	}
	off_t fileSize = fileInfo.st_size;

	// 将文件映射到内存中
	char* fileData = static_cast<char*>(mmap(NULL, fileSize, PROT_READ, MAP_PRIVATE, fd, 0));
	if (fileData == MAP_FAILED) {
		perror("Failed to mmap file");
		close(fd);
		// 发送 404 页面
		return;
	}

	// 将文件内容发送到客户端套接字
	send(clientSock, fileData, fileSize, 0);

	// 解除文件映射
	munmap(fileData, fileSize);

	// 关闭文件描述符
	close(fd);
}