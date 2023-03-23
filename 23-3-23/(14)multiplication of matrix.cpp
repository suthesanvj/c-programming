#include <stdio.h>

#define ROW 3
#define COL 3

void matrix_multiply(int mat1[][COL], int mat2[][COL], int res[][COL]) {
    int i, j, k;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            res[i][j] = 0;
            for (k = 0; k < COL; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void print_matrix(int mat[][COL]) {
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROW][COL] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    int mat2[ROW][COL] = {{9, 8, 7},
                          {6, 5, 4},
                          {3, 2, 1}};

    int res[ROW][COL];

    matrix_multiply(mat1, mat2, res);

    printf("Matrix 1:\n");
    print_matrix(mat1);

    printf("Matrix 2:\n");
    print_matrix(mat2);

    printf("Resultant Matrix:\n");
    print_matrix(res);

    return 0;
}

