#include <stdio.h>

int main() {
    int p, q, r;

    printf("Enter the value of P, Q, and R: ");
    scanf("%d %d %d", &p, &q, &r);

    for (int i = p; i <= q; i++) {
        int num = i;
        while (num != 0) {
            int digit = num % 10;
            if (digit == r) {
                goto skip;
            }
            num /= 10;
        }
        printf("%d ", i);
        skip:
        continue;
    }

    return 0;
}

