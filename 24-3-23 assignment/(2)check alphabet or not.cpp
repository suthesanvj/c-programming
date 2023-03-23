#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') ? printf("Alphabet\n") : printf("Not an Alphabet\n");
    
    return 0;
}

