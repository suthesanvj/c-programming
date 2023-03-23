#include <stdio.h>

void calc_square_cube(int num, int *square, int *cube) {
    *square = num * num;
    *cube = num * num * num;
}

int main() {
    int num, square, cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    calc_square_cube(num, &square, &cube);

    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}

