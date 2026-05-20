#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <semaphore.h>

#define NUM_CHILD 5
#define LOOP 10000

int main() {
    int *counter = mmap(NULL, sizeof(int), PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, -1, 0);
    sem_t *sem = mmap(NULL, sizeof(sem_t), PROT_READ|PROT_WRITE, MAP_SHARED|MAP_ANONYMOUS, -1, 0);

    *counter = 0;
    sem_init(sem, 1, 1);

    printf("=== Race Condition with Semaphore (Safe) ===\n");

    for (int i = 0; i < NUM_CHILD; i++) {
        if (fork() == 0) {
            for (int j = 0; j < LOOP; j++) {
                sem_wait(sem);
                (*counter)++;
                sem_post(sem);
            }
            exit(0);
        }
    }

    for (int i = 0; i < NUM_CHILD; i++) wait(NULL);

    printf("Final Counter = %d (Correct)\n", *counter);

    sem_destroy(sem);
    return 0;
}
