#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    printf(1, "My PID: %d\n", getpid());
    printf(1, "Running on xv6 by Md. Abu Rayhan\n");
    exit();
}
