#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];
    pipe(pipefd);
    char buffer[100];

    if(fork() == 0) {   // Child
        close(pipefd[0]);
        char msg[] = "Hello Parent! This is from Child (ID: 220125)";
        write(pipefd[1], msg, strlen(msg)+1);
        close(pipefd[1]);
    } else {            // Parent
        close(pipefd[1]);
        read(pipefd[0], buffer, sizeof(buffer));
        printf("Parent received via Pipe: %s\n", buffer);
        close(pipefd[0]);
        wait(NULL);
    }
    return 0;
}
