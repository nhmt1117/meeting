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
#include "epoll_server.h"
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <cstring>


using namespace std;
using namespace std::filesystem;

#define SERVER_PORT 8080
#define MAX_EVENTS 512
#define NUM_THREADS 4



static int debug = 1;
string getTime();
void* handleClient(void* arg);
void doHttpReponse(int clientSock, string filePath);
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
	int sock; // 代表信箱
	struct sockaddr_in server_addr;

	// 1.创建信箱
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock < 0) {
		cerr << "Failed to create socket" << endl;
		return 1;
	}

	// 清空标签，写上地址和端口号
	bzero(&server_addr, sizeof(server_addr));

	server_addr.sin_family = AF_INET;                // 选择协议IPV4
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY); // 监听本地所有IP地址
	server_addr.sin_port = htons(SERVER_PORT);       // 绑定端口号

	// 2.标签绑定到收信的信箱
	if (bind(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
		cerr << "Failed to bind socket" << endl;
		close(sock);
		return 1;
	}

	// 3.将信箱挂载，监听收信
	if (listen(sock, 128) < 0) {
		cerr << "Failed to listen on socket" << endl;
		close(sock);
		return 1;
	}

	cout << "等待客户端连接" << endl;

	// 创建一个 EpollServer 实例
	EpollServer epollServer(512);

	// 将服务器套接字添加到 epoll 实例中，监听连接事件
	if (!epollServer.AddFd(sock, EPOLLIN | EPOLLET)) {
		cerr << "Failed to add server socket to epoll" << endl;
		close(sock);
		return 1;
	}

	while (1) {
		// 在主循环中等待事件的发生
		int eventCount = epollServer.Wait();
		if (eventCount < 0) {
			cerr << "epoll_wait failed" << endl;
			break;
		}

		// 处理事件
		for (int i = 0; i < eventCount; ++i) {
			int fd = epollServer.GetEventFd(i);
			uint32_t events = epollServer.GetEvents(i);

			if (fd == sock) {
				// 新客户端连接
				struct sockaddr_in client;
				socklen_t clientAddrLen = sizeof(client);
				int clientSock = accept(sock, (struct sockaddr*)&client, &clientAddrLen);
				if (clientSock < 0) {
					cerr << "Failed to accept client connection" << endl;
					continue;
				}
				cout << "**************************" << endl << "New client connected. Client socket: " << clientSock << endl;

				// 将新客户端套接字添加到 epoll 实例中，监听读事件
				if (!epollServer.AddFd(clientSock, EPOLLIN | EPOLLET | EPOLLONESHOT)) {
					cerr << "Failed to add client socket to epoll" << endl;
					close(clientSock);
					continue;
				}
			}
			else {
				// 已连接客户端有数据可读
				// 创建新线程处理客户端请求
				pthread_t tid;
				ThreadArgs* threadArgs = new ThreadArgs{ &epollServer, fd };
				if (pthread_create(&tid, NULL, handleClient, (void*)threadArgs) != 0) {
					cerr << "Failed to create thread for client" << endl;
					delete threadArgs;
					continue;
				}
				// 分离线程，防止线程资源泄露
				// 等待线程完成处理
				pthread_join(tid, nullptr);
			}
		}
	}

	close(sock);
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

void* handleClient(void* arg) {
	// ThreadArgs* args = (ThreadArgs*)arg;
	//智能指针，避免内存泄露
	std::unique_ptr<ThreadArgs> args(reinterpret_cast<ThreadArgs*>(arg));
	EpollServer* epollServer = args->epollServer;
	int clientSock = args->fd;
	string requestBuffer(1024, '\0');
	string requestedUrl;
	string requestedFilePath = "./html_docs";

	int bytesRead = read(clientSock, requestBuffer.data(), 1023);
	string currentTime = getTime();

	requestBuffer.resize(bytesRead - 1);
	cout << "time : " << currentTime << endl << requestBuffer;
	if (requestBuffer.length() > 0) {
		int i = 0;
		if (strncasecmp(requestBuffer.data(), "GET", 3) == 0) {
			while (!isspace(requestBuffer[i++]));
			while (!isspace(requestBuffer[i]) && requestBuffer[i] != '?') {
				requestedUrl = requestedUrl + requestBuffer[i++];
			}
			requestedFilePath = requestedFilePath + requestedUrl;

			//执行http响应
			cout << "request filePath : " << requestedFilePath << endl;
			doHttpReponse(clientSock, requestedFilePath);

		}
		else {// 非get请求，响应客户端400
			cout << "***400***" << endl;
			badRequest(clientSock);
		}

	}
	else { // 请求格式有问题，响应客户端501
		cout << "***501***" << endl;
		notImplemented(clientSock);
	}

	// 重置 EPOLLONESHOT 事件，以便下次有数据到达时重新触发
	if (!epollServer->ModFd(clientSock, EPOLLIN | EPOLLET | EPOLLONESHOT)) {
		cerr << "Failed to modify client socket event" << endl;
	}
	close(clientSock); // 关闭客户端套接字

	return nullptr;
}

void doHttpReponse(int clientSock, string filePath) {

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
	string filePath = "./html_docs/400.html";
	getFile(clientSock, filePath);
	return;
}
// ****404***
void notFound(int clientSock) {
	string filePath = "./html_docs/404.html";
	getFile(clientSock, filePath);
	return;
}
// ***501***
void notImplemented(int clientSock) {
	string filePath = "./html_docs/501.html";
	getFile(clientSock, filePath);
	return;
}
// ***502***
void badGateway(int clientSock) {
	string filePath = "./html_docs/502.html";
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