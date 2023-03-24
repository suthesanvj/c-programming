#include<stdio.h>
int main() {
    float m1, m2, m3, m4, total, aggregate;
    printf("Enter the marks in 4 subjects: ");
    scanf("%f%f%f%f", &m1, &m2, &m3, &m4);
    total = m1 + m2 + m3 + m4;
    aggregate = (total/400)*100;
    printf("Total marks: %.2f\n", total);
    printf("Aggregate marks: %.2f\n", aggregate);
    if(aggregate >= 75) {
        printf("Grade: Distinction\n");
    }
    else if(aggregate >= 60 && aggregate < 75) {
        printf("Grade: First Division\n");
    }
    else if(aggregate >= 50 && aggregate < 60) {
        printf("Grade: Second Division\n");
    }
    else if(aggregate >= 40 && aggregate < 50) {
        printf("Grade: Third Division\n");
    }
    else {
        printf("Grade: Fail\n");
    }
    return 0;
}

