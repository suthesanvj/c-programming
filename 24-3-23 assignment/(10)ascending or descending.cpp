#include <stdio.h>
#include <string.h>


void sort_names_ascending(char arr[][50], int n) {
    char temp[50];
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}


void sort_names_descending(char arr[][50], int n) {
    char temp[50];
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(arr[i], arr[j]) < 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char names[10][50];
    int n;

    
    printf("Enter the number of names: ");
    scanf("%d", &n);


    printf("Enter the names: \n");
    for(int i=0; i<n; i++) {
        scanf("%s", names[i]);
    }

    int choice;


    printf("Enter the choice of sorting order:\n1. Ascending order\n2. Descending order\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            sort_names_ascending(names, n);
            printf("\nThe names in ascending order are:\n");
            for(int i=0; i<n; i++) {
                printf("%s\n", names[i]);
            }
            break;
        case 2:
            sort_names_descending(names, n);
            printf("\nThe names in descending order are:\n");
            for(int i=0; i<n; i++) {
                printf("%s\n", names[i]);
            }
            break;
        default:
            printf("\nInvalid choice!\n");
            break;
    }

    return 0;
}

