#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollno;
    char name[20];
    struct Date dob;
};

int main() {
    struct Student stu;
    
    printf("Enter student roll number: ");
    scanf("%d", &stu.rollno);
    
    printf("Enter student name: ");
    scanf("%s", stu.name);
    
    printf("Enter student date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &stu.dob.day, &stu.dob.month, &stu.dob.year);
    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", stu.rollno);
    printf("Name: %s\n", stu.name);
    printf("Date of Birth: %d-%d-%d\n", stu.dob.day, stu.dob.month, stu.dob.year);
    
    return 0;
}

