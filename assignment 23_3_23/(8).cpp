#include <stdio.h>

int main() {
    int N, X, i, arr[100];
    int index = -1;
    
    // read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    
    // read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // read the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &X);
    
    // search for the element in the array
    for (i = 0; i < N; i++) {
        if (arr[i] == X) {
            index = i;
            break;
        }
    }
    
    // print the index of the element if found, else print -1
    if (index != -1) {
        printf("The index of first occurrence of %d is %d.\n", X, index);
    } else {
        printf("%d not found in the array.\n", X);
    }
    
    return 0;
}

