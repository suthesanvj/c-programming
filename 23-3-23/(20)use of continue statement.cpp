#include <stdio.h>

int main() {
    int i;

    printf("Printing odd numbers between 1 and 10 (excluding 5):\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  
        }
        if (i % 2 == 0) {
            continue;  
        }
        printf("%d\n", i);
    }

    return 0;
}

