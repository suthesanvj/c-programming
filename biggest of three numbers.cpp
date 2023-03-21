//write a program to find biggest of three number 
#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is biggest number");
	}
    else if(b>c&&b>a)
	{
		printf("B is biggest number");
	}
	else if (c>a&&c>b)
	{
		printf("C is biggest number");
	}
}
	

