#include <stdio.h>

int main() {
    int num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        sum += num % 10;  // add the rightmost digit to the sum
        num /= 10;  // remove the rightmost digit from the number
    }
    printf("Sum of digits = %d", sum);
    return 0;
}

