#include <stdio.h>

int main()
 {
    int num, temp, first, last, digits = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    temp = num;
    
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    
    last = num % 10;
    first = num / (int)pow(10, digits - 1);
    
    
    num = num - last + first;
    num = num - first*(int)pow(10, digits - 1) + last*(int)pow(10, digits - 1);
    
    printf("The number with first and last digits swapped is: %d", num);
    
    return 0;
}

