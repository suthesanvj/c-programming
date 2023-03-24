#include <stdio.h>

void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swap, num1 = %d and num2 = %d", num1, num2);
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Before swap, num1 = %d and num2 = %d\n", num1, num2);
    
    swap(num1, num2);
    
    return 0;
}

