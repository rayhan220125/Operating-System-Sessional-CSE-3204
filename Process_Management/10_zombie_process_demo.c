#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        printf("Child (PID: %d) exiting...\n", getpid());
        exit(0);
    } 
    else {
        printf("Parent (PID: %d) created child. Not calling wait()...\n", getpid());
        sleep(5);
        printf("Parent now calling wait() to remove zombie...\n");
        wait(NULL);
    }
    return 0;
}
