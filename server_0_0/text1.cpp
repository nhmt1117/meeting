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
#define SERVER_PORT 8888

using namespace std;
using namespace std::filesystem;

static int debug = 1;
string getTime();
void handleClient(int clientSock);
void doHttpReponse(int clientSock, string filePath);
void sendHeader(int clientSock);
void badRequest(int clientSock);// 400 Bad Request
void notFound(int clientSock);// 404 Not Found
void notImplemented(int clientSock);// 501 Not Implemented
void badGateway(int clientSock);//502 Bad Gateway
void getFile(int clientSock, string filePath);

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

	while (1) {
		struct sockaddr_in client;
		socklen_t clientAddrLen = sizeof(client);
		// 4. 接受客户端连接
		int clientSock = accept(sock, (struct sockaddr*)&client, &clientAddrLen);
		if (clientSock < 0) {
			cerr << "Failed to accept client connection" << endl;
			continue;
		}

		handleClient(clientSock);
		close(clientSock);
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

void handleClient(int clientScok) {
	string buf(1024, '\0');
	string url;
	string filePath = "../html_docs";
	int len = read(clientScok, buf.data(), 1023);
	string time = getTime();

	buf.resize(len - 1);
	cout << "**************" << endl << "time : " << time << endl << buf;
	if (buf.length() > 0) {
		int i = 0;
		if (strncasecmp(buf.data(), "GET", 3) == 0) {
			while (!isspace(buf[i++]));
			while (!isspace(buf[i]) && buf[i] != '?') {
				url = url + buf[i++];
			}
			filePath = filePath + url;

			//执行http响应
			cout << "request filePath : " << filePath << endl;
			doHttpReponse(clientScok, filePath);

		}
		else {// 非get请求，响应客户端400
			cout << "***400***" << endl;
			badRequest(clientScok);
		}

	}
	else { // 请求格式有问题，响应客户端501
		cout << "***501***" << endl;
		notImplemented(clientScok);
	}
	return;
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
	string header = "Http/1.1 200 OK\r\nContent-Type: text/html\r\nAccess-Control-Allow-Origin: *\r\n\r\n";
	send(clientSock, header.c_str(), header.length(), 0);
}
void getFile(int clientSock, string filePath) {
	cout << "true filePath : " << filePath << endl;
	// 打开文件流
	ifstream fileStream(filePath, ios::binary);
	// 读取文件内容到字符串流
	ostringstream oss;
	oss << fileStream.rdbuf();
	string fileContent = oss.str();

	// 在这里你可以将文件内容发送到客户端的套接字clientSock里
	send(clientSock, fileContent.c_str(), fileContent.size(), 0);
	return;

}