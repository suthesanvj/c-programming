#include <stdio.h>

int main() {
    float marks[4];
    float total = 0, aggregate;
    int i;

    printf("Enter marks for 4 subjects:\n");
    for (i = 0; i < 4; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    aggregate = total / 4.0;
    printf("Total marks: %.2f\n", total);
    printf("Aggregate marks: %.2f\n", aggregate);

    if (aggregate >= 75) {
        printf("Grade: Distinction\n");
    } else if (aggregate >= 60 && aggregate < 75) {
        printf("Grade: First Division\n");
    } else if (aggregate >= 50 && aggregate < 60) {
        printf("Grade: Second Division\n");
    } else if (aggregate >= 40 && aggregate < 50) {
        printf("Grade: Third Division\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
   
