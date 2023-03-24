#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    struct Date hire_date;
    double salary;
};

int main() {
    struct Employee employee;

    printf("Enter the employee name: ");
    scanf("%s", employee.name);

    printf("Enter the hire date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &employee.hire_date.day, &employee.hire_date.month, &employee.hire_date.year);

    printf("Enter the employee salary: ");
    scanf("%lf", &employee.salary);

    printf("Employee name: %s\n", employee.name);
    printf("Hire date: %02d/%02d/%04d\n", employee.hire_date.day, employee.hire_date.month, employee.hire_date.year);
    printf("Salary: $%.2f\n", employee.salary);

    return 0;
}

