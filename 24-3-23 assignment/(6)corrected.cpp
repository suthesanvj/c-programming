#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    int a = 10;

    pid_t pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Error: Fork failed\n");
        exit(1);
    } else if (pid == 0) {
        
        a++;
        printf("Child process: a = %d\n", a);
        exit(0);
    } else {
        
        wait(NULL); 
        printf("Parent process: a = %d\n", a);
    }

    return 0;
}

