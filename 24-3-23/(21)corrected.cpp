#include <stdio.h>
#include <conio.h>

void main()
{
    char str[50];
    int i, length = 0;
    clrscr();
    printf("\nEnter the String: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("\nThe length of the string is %d.", length);
    getch();
}

