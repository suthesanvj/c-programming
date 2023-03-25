#include <stdio.h>

int main() {
    int numbers[] = {2, -5, 6, -8, 0, -3, 1, -4};
    int count = 0;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++) {
        if(numbers[i] < 0) {
            count++;
        }
    }

    printf("Number of negative numbers: %d\n", count);

    return 0;
}

