#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    printf("Parent PID: %d\n\n", getpid());

    for(int i = 1; i <= 3; i++) {
        if(fork() == 0) {   // Child
            printf("Child %d -> PID: %d | PPID: %d\n", i, getpid(), getppid());
            sleep(1);
            return 0;
        }
    }

    for(int i = 1; i <= 3; i++)
        wait(NULL);

    printf("All children finished.\n");
    return 0;
}
