#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>

int main() {
    int *shared = mmap(NULL, sizeof(int), PROT_READ|PROT_WRITE, 
                      MAP_SHARED|MAP_ANONYMOUS, -1, 0);
    *shared = 100;

    printf("Shared Memory Example\n");
    printf("Initial value: %d\n", *shared);

    if(fork() == 0) {   // Child
        *shared = 999;
        printf("Child changed value to: %d\n", *shared);
        exit(0);
    }

    sleep(1);
    printf("Parent sees value: %d\n", *shared);   // Changed value
    wait(NULL);
    return 0;
}
