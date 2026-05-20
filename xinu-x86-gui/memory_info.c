#include <stdio.h>
#include <kernel.h>

int main(int argc, char **argv)
{
    printf("=== Xinu Memory Info ===\n");
    printf("Free Memory: %d bytes\n", freemem());
    return 0;
}
