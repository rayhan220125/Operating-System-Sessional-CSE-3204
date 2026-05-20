#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Current Process ID (PID)  : %d\n", getpid());
    printf("Parent Process ID (PPID) : %d\n", getppid());
    return 0;
}
