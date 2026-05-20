#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int *arr = malloc(10 * sizeof(int));
    
    for(int i = 0; i < 10; i++)
        arr[i] = i * 10;

    printf("Dynamic Memory Allocation:\n");
    for(int i = 0; i < 10; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    free(arr);     // Good practice
    return 0;
}
