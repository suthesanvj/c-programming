#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if((year%400==0)&&(year%100!=0))
	printf("%d is a lepa year",year);
	else
	printf("%d is not a leap year",year);
}
