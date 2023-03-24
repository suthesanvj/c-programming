#include <stdio.h>

struct Student {
    int id;
    int grade;
};

int main() {
    int n, i;
    int num_A = 0, num_B = 0, num_C = 0, num_D = 0, num_F = 0;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    
    for (i = 0; i < n; i++) {
        printf("Enter student %d's id: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter student %d's grade: ", i+1);
        scanf("%d", &students[i].grade);
        
      
        if (students[i].grade >= 90) {
            num_A++;
        } else if (students[i].grade >= 78) {
            num_B++;
        } else if (students[i].grade >= 65) {
            num_C++;
        } else if (students[i].grade >= 50) {
            num_D++;
        } else {
            num_F++;
        }
    }
    
    
    printf("Student Grades Summary:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d - id: %d, grade: %d\n", i+1, students[i].id, students[i].grade);
    }
    printf("Number of As: %d\n", num_A);
    printf("Number of Bs: %d\n", num_B);
    printf("Number of Cs: %d\n", num_C);
    printf("Number of Ds: %d\n", num_D);
    printf("Number of Fs: %d\n", num_F);
    
    return 0;
}

