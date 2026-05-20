#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int pid = fork();
    if(pid == 0) {
        printf(1, "Child Process | PID = %d\n", getpid());
    } else {
        printf(1, "Parent Process | Child PID = %d\n", pid);
        wait();
    }
    exit();
}
