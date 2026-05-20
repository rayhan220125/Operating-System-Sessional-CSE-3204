#include <stdio.h>
#include <kernel.h>

void myproc(char *msg)
{
    printf("Process Running: %s | PID: %d\n", msg, getpid());
    sleep(2000);
}

int main(int argc, char **argv)
{
    resume(create((int(*)())myproc, 4096, 20, "procA", 1, "Process A"));
    resume(create((int(*)())myproc, 4096, 20, "procB", 1, "Process B"));
    printf("Main: Two processes created.\n");
    return 0;
}
