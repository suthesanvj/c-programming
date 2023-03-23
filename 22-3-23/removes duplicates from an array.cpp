#include <stdio.h>

void removeDuplicates(int arr[], int size) {
    int i, j, k;
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; ) {
            if(arr[j] == arr[i]) {
                for(k = j; k < size; k++) {
                    arr[k] = arr[k+1];
                }
                size--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    removeDuplicates(arr, size);
    
    printf("\nArray after removing duplicates: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

