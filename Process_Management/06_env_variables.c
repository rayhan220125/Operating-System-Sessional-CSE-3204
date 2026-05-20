#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("=== Environment Variables ===\n\n");
    
    printf("PATH = %s\n", getenv("PATH"));
    printf("HOME = %s\n", getenv("HOME"));
    printf("USER = %s\n", getenv("USER"));
    printf("SHELL = %s\n", getenv("SHELL"));
    printf("LANG  = %s\n", getenv("LANG"));

    setenv("MY_VAR", "CSE_3204_Rayhan_220125", 1);
    printf("MY_VAR = %s\n", getenv("MY_VAR"));

    return 0;
}
