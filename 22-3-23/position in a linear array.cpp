#include <stdio.h>

int main() {
    int n, i, x, found = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    
    for(i=0; i<n; i++) {
        if(arr[i] == x) {
            printf("%d found at position %d.\n", x, i+1);
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        printf("%d is not present in the array.\n", x);
    }
    
    return 0;
}

