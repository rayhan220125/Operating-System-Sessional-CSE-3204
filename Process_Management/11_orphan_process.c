#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child (PID: %d) | Parent PID: %d\n", getpid(), getppid());
        sleep(3);
        printf("Child (PID: %d) now Orphan -> New PPID: %d\n", getpid(), getppid());
    } 
    else {
        printf("Parent (PID: %d) exiting...\n", getpid());
        exit(0);
    }

    sleep(5);
    return 0;
}
