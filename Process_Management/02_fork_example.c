#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;
    int data = 100;
    int stack = 200;

    printf("Before fork - Parent PID: %d\n\n", getpid());

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } 
    else if (pid == 0) {
        data *= 3;
        stack *= 3;
        printf("Child  Process -> PID: %d | PPID: %d | data=%d, stack=%d\n", 
               getpid(), getppid(), data, stack);
    } 
    else {
        sleep(1);
        printf("Parent Process -> PID: %d | Child PID: %d | data=%d, stack=%d\n", 
               getpid(), pid, data, stack);
    }
    return 0;
}
