#include <stdio.h>

// Function to check if a number is composite
int isComposite(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    // Check each element in the array for being composite
    for (int i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }

    printf("There are %d composite numbers in the array.", count);

    return 0;
}

