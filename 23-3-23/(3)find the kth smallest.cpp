#include <stdio.h>

int kthSmallest(int arr[], int n, int k) {
    int i, j, temp;
    
    
    for (i = 0; i < n-1; i++) {
        int min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
    
    return arr[k-1];
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    printf("%dth smallest element is %d", k, kthSmallest(arr, n, k));
    
    return 0;
}

