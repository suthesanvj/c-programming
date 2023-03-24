#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int empno;
    char name[20];
    float salary;
    struct Date doj;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);
    
    printf("Enter date of joining (dd mm yyyy): ");
    scanf("%d %d %d", &emp.doj.day, &emp.doj.month, &emp.doj.year);
    
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Date of Joining: %d-%d-%d\n", emp.doj.day, emp.doj.month, emp.doj.year);
    
    return 0;
}

