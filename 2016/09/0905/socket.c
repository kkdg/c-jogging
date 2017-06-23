#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define PORT 9000

char buffer[BUFSIZ] = "Hello, World!";

main()
{
	// printf("Hello World\n");
    int c_socket, s_socket;
    struct sockaddr_in s_addr, c_addr;
    int len, n;

    s_socket = socket(PF_INET, SOCK_STREAM, 0);
    s_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    s_addr.sin_family = AF_INET;
    s_addr.sin_port = htons(PORT);

    if(bind(s_socket, (struct sockaddr *) &s_addr, sizeof(s_addr)) == -1) {
        printf("Can not bind\n");
        return -1;
    }

    if(listen(s_socket,5) == -1) {
        printf("Listen Failed\n");
        return -1;
    }

    while(1) {
        len = sizeof(c_addr);
        c_socket = accept(s_socket, (struct sockaddr *) &c_addr, &len);

        n = strlen(buffer);
        write(c_socket, buffer, n);

        close(c_socket);
    }

    clsoe(s_socket);
}
