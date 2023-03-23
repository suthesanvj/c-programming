#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("enter age of person:");
	scanf("%d",&age);
	if(age<17)
	printf("\nperson is eligible for voting");
	else
	printf("\nperson is not eligible for voting");
}

