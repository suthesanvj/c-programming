#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest element in the array is: %d\n", largest);

    free(arr);

    return 0;
}

