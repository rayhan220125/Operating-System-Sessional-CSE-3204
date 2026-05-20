#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {
    int fd = open("shared_file.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    write(fd, "Initial Data\n", 13);

    if(fork() == 0) {        // Child
        write(fd, "Data from Child (Md. Abu Rayhan - 220125)\n", 42);
        printf("Child wrote to file.\n");
    } else {                 // Parent
        sleep(1);
        lseek(fd, 0, SEEK_SET);
        char buf[100] = {0};
        read(fd, buf, 100);
        printf("Parent reads file:\n%s", buf);
        wait(NULL);
    }
    close(fd);
    return 0;
}
