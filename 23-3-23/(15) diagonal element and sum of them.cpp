#include <stdio.h>

int main() {
  int rows, cols, i, j, sum = 0;
  printf("Enter number of rows in matrix: ");
  scanf("%d", &rows);
  printf("Enter number of columns in matrix: ");
  scanf("%d", &cols);
  int matrix[rows][cols];

  printf("Enter elements of matrix:\n");
  for(i = 0; i < rows; i++) {
    for(j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Diagonal elements are: ");
  for(i = 0; i < rows; i++) {
    for(j = 0; j < cols; j++) {
      if(i == j) {
        printf("%d ", matrix[i][j]);
        sum += matrix[i][j];
      }
    }
  }
  printf("\nSum of diagonal elements is: %d", sum);
  return 0;
}

