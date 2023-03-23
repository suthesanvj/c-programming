#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int year, nextLeapYear, prevLeapYear;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (isLeapYear(year)) {
        nextLeapYear = year + 4 - (year % 4);
        printf("%d is a leap year. Next leap year: %d\n", year, nextLeapYear);
    } else {
        prevLeapYear = year - (year % 4);
        while (!isLeapYear(prevLeapYear)) {
            prevLeapYear -= 4;
        }
        printf("%d is not a leap year. Previous leap year: %d\n", year, prevLeapYear);
    }
    
    return 0;
}

