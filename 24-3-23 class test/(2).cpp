#include <stdio.h>

int main() {
    int limit, i, a = 0, b = 1, c;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d %d ", a, b);
    
    for (i = 2; i < limit; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}

