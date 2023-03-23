#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char str1[100], str2[100], sum[100];
    int num1 = 0, num2 = 0, i, j, k = 0, carry = 0;
    
    printf("Enter the first binary string: ");
    scanf("%s", str1);
    printf("Enter the second binary string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    
    for (i = len1-1, j = 0; i >= 0; i--, j++) {
        num1 += (str1[i] - '0') * pow(2, j);
    }
    for (i = len2-1, j = 0; i >= 0; i--, j++) {
        num2 += (str2[i] - '0') * pow(2, j);
    }

    int total = num1 + num2;

   
    while (total > 0) {
        int rem = total % 2;
        sum[k++] = rem + '0';
        total /= 2;
    }

    
    if (carry > 0) {
        sum[k++] = carry + '0';
    }

    
    for (i = 0, j = k-1; i < j; i++, j--) {
        char temp = sum[i];
        sum[i] = sum[j];
        sum[j] = temp;
    }


    printf("Sum in binary: %s\n", sum);

    return 0;
}

