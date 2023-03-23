#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");  
        }
        for (j = 0; j <= (n-i); j++) {
            printf("%c ", 'A'+j); 
        }
        for (j = (n-i)-1; j >= 0; j--) {
            printf("%c ", 'A'+j); 
        }
        printf("\n");  
    }

    return 0;
}

