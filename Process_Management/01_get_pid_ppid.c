#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main() {
    signal(SIGHUP, SIG_IGN);
    setbuf(stdout, NULL);

    printf("=== Process ID Information ===\n");
    printf("My PID  : %d\n", getpid());

    while (1) {
        printf("My PPID : %d\n", getppid());
        sleep(2);
    }
    return 0;
}
