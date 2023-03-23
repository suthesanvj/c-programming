#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void transpose(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols);

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Read the matrix dimensions from the user
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Read the matrix values from the user
    printf("Enter the matrix values:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the original matrix
    printf("\nOriginal matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute and print the transpose of the matrix
    transpose(matrix, rows, cols);
    printf("\nTranspose of matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}

void transpose(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int temp;

    for (int i = 0; i < rows; i++) {
        for (int j = i+1; j < cols; j++) {
            // Swap the elements at (i, j) and (j, i)
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

