#include <stdio.h>

int main()
{
    int i=1, n, sum=0;
    
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    
    printf("The sum of n numbers is %d", sum);
    
    return 0;
}

