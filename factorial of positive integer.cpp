#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Error handling: check if the number is negative
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu", n, factorial);
    return 0;
}

