#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if(pid == 0) {
        printf("Child process (PID: %d) running...\n", getpid());
        sleep(2);
        printf("Child process exiting with code 42...\n");
        exit(42);
    } 
    else {
        int status;
        printf("Parent waiting for child (PID: %d)...\n", pid);
        
        wait(&status);
        
        if(WIFEXITED(status))
            printf("Child terminated normally with exit code: %d\n", WEXITSTATUS(status));
    }
    return 0;
}
