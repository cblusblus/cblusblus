#include <iostream>
#include <spawn.h>
#include <string>
#include <cstring>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;

int main(int argc, char* argv[]) {
    const char* program = "/usr/bin/date";

    // 예: date +%T -s "12:34:56"
    char* cmd[] = {
        const_cast<char*>("date"),
        const_cast<char*>("+%T"),
        const_cast<char*>("-s"),
        argv[1],                    //"hh:mm:ss"
        nullptr
    };

    pid_t pid;
    if (posix_spawn(&pid, program, nullptr, nullptr, cmd, environ) != 0) {
        std::cerr << "Failed to execute posix_spawn." << std::endl;
        return 1;
    }

    int status;
    if (waitpid(pid, &status, 0) == -1) {
        std::cerr << "Failed to execute waitpid." << std::endl;
        return 2;
    }

    if (!(WIFEXITED(status) && WEXITSTATUS(status) == 0)) {
        std::cerr << "Failed to set time.\n";
    }

    return 0;
}