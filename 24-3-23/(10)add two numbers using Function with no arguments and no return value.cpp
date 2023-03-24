#include <stdio.h>

void add_numbers();

int main() {
    add_numbers();
    return 0;
}

void add_numbers() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
}

