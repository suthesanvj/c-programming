#include<stdio.h>
int main() {
	int numRows;
	printf("enter the number of rows: ");
	scanf("%d", &numRows);
	
	// Loop through each row
	for (int i = 1; i <= numRows; i++) {
		// Loop through each column
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
	
