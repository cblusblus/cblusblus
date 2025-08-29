#include <sys/types.h>
#include <sys/socket.h>
#include <cerrno>
#include <cstdio>

int main() {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {   //소켓이 열리지 않은 경우
        perror("socket failed");
        return errno;
    }
    else {              //소켓이 열린 경우
        
    }
    return 0;
}