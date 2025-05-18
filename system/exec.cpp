#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork 실패");
        return 1;
    }
    else if (pid == 0) {
        // 자식 프로세스: date 명령 실행
        execlp("date", "date", NULL);
        
        perror("execlp 실패");
            //execlp가 실패했을 경우만 이 줄이 실행됨
        return 2;
    }
    else {
        // 부모 프로세스: 자식 프로세스 기다림
        int status;
        waitpid(pid, &status, 0);
    }

    return 0;
}