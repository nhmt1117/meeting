#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <arpa/inet.h>
using namespace std;

#define SERVER_PORT 666
#define SERVER_IP "127.0.0.1"
int main(int argc, char *argv[])
{

	int sockfd;
	char *message;
	struct sockaddr_in servaddr;
	int n;
	char buf[64];
	if (argc != 2)
	{
		fputs("Usage: ./echo_client message \n", stderr);
		exit(1);
	}

	message = argv[1];

	cout << "message: " << message << endl;
	// 1.
	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	memset(&servaddr, '\0', sizeof(struct sockaddr_in));

	servaddr.sin_family = AF_INET;
	inet_pton(AF_INET, SERVER_IP, &servaddr.sin_addr);
	servaddr.sin_port = htons(SERVER_PORT);
	// 2.
	connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	// 3.
	write(sockfd, message, strlen(message));
	// 4.
	n = read(sockfd, buf, sizeof(buf) - 1);

	if (n > 0)
	{
		buf[n] = '\0';
		cout << "receive: " << buf << endl;
	}
	else
	{
		perror("error!!!");
	}

	cout << "finished.\n";

	// 5.
	close(sockfd);

	return 0;
}
