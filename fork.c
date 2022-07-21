#include <stdio.h>
#include <unistd.h>

int main()
{
    int s;
    s = fork();
    if (s > 0) {
        printf("This is parent id \n", getpid());
    }
    else if (s == 0) {
        printf("fork sucess %d \n", getpid());
        printf("fork parent process id %d\n", getppid());
    }
}
