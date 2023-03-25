#include <stdio.h>

int square(int num) {
    return num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int square_num = square(num);

    printf("Square of %d is: %d\n", num, square_num);

    return 0;
}

