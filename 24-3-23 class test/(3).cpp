#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int freq[MAX_SIZE] = {0};
    int non_dup[MAX_SIZE], dup[MAX_SIZE];
    int i, j, n, count_non_dup = 0, count_dup = 0, flag;

    printf("Enter the size of the list: ");
    scanf("%d", &n);

    printf("Enter the list items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;
                flag = 1;
            }
        }
        if (flag) {
            dup[count_dup++] = arr[i];
        } else {
            non_dup[count_non_dup++] = arr[i];
        }
    }

    
    printf("\nDuplicate items: ");
    for (i = 0; i < count_dup; i++) {
        printf("%d ", dup[i]);
    }

    printf("\nNon-duplicate items: ");
    for (i = 0; i < count_non_dup; i++) {
        printf("%d ", non_dup[i]);
    }

    return 0;
}

