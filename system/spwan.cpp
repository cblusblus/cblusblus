#include <iostream>
#include <spawn.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

int main() {
    pid_t pid;
    char *argv[] = {
        const_cast<char*>("date"),  // 명령어 이름
        nullptr                     // 인자 끝
    };

    int result = posix_spawn(&pid, "/bin/date", nullptr, nullptr, argv, environ);
    if (result != 0) {
        std::cerr << "posix_spawn failed: " << result << std::endl;
        return 1;
    }

    // 자식 프로세스가 끝날 때까지 기다림
    int status;
    if (waitpid(pid, &status, 0) == -1) {
        perror("waitpid");
        return 2;
    }

    return 0;
}