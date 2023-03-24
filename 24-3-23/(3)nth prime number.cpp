#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int prime_count = 0, i = 2;
    printf("First %d prime numbers:\n", n);
    while (prime_count < n) {
        if (is_prime(i)) {
            printf("%d ", i);
            prime_count++;
        }
        i++;
    }
    
    printf("\n");
    
    printf("The %dth prime number is ", n);
    prime_count = 0, i = 2;
    while (prime_count < n) {
        if (is_prime(i)) {
            prime_count++;
        }
        if (prime_count == n) {
            printf("%d\n", i);
        }
        i++;
    }
    
    return 0;
}

