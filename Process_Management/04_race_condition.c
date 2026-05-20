#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define NUM_CHILD 5
#define LOOP 10000

int main() {
    int *counter = malloc(sizeof(int));
    *counter = 0;

    printf("=== Race Condition Example (Without Protection) ===\n");

    for (int i = 0; i < NUM_CHILD; i++) {
        if (fork() == 0) {
            for (int j = 0; j < LOOP; j++) {
                (*counter)++;
            }
            exit(0);
        }
    }

    for (int i = 0; i < NUM_CHILD; i++)
        wait(NULL);

    printf("Final Counter = %d (Expected: %d)\n", *counter, NUM_CHILD * LOOP);
    free(counter);
    return 0;
}
