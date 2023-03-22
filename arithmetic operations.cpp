#include <stdio.h>
#include <math.h>

int main() {
    int x, n, choice;
    float result;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\n1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = x + n;
            printf("%d + %d = %f", x, n, result);
            break;
        case 2:
            result = x - n;
            printf("%d - %d = %f", x, n, result);
            break;
        case 3:
            result = x * n;
            printf("%d * %d = %f", x, n, result);
            break;
        case 4:
            result = (float)x / n;
            printf("%d / %d = %f", x, n, result);
            break;
        case 5:
            result = pow(x, n);
            printf("%d ^ %d = %f", x, n, result);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}

