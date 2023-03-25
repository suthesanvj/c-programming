#include <stdio.h>

int main() {
   int n, i, sum=0;
   unsigned long long factorial = 1;

   printf("Enter a positive integer: ");
   scanf("%d", &n);

   // If user enters negative number
   if (n < 0)
       printf("Error: Factorial of negative number doesn't exist.");
   else {
       for (i = 1; i <= n; ++i) {
           factorial *= i;   // factorial = factorial * i;
           if(n%i==0){
               sum+=i;
           }
       }
       printf("Factorial of %d = %llu\n", n, factorial);
       printf("Sum of factors of %d = %d", n, sum);
   }
   return 0;
}

