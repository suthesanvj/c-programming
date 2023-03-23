#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, j, count;
    int is_vowel;
    int len;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);
    printf("Consonants: ");
    for (i = 0; i < len; i++) {
        is_vowel = 0;
        for (j = 0; j < len; j++) {
            if (i != j && word[i] == word[j]) {
                break;
            }
        }
        if (j == len) {
            switch (word[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    is_vowel = 1;
                    break;
            }
            if (!is_vowel) {
                printf("%c ", word[i]);
            }
        }
    }
    printf("\n");
    printf("Vowels: ");
    for (i = 0; i < len; i++) {
        is_vowel = 0;
        for (j = 0; j < len; j++) {
            if (i != j && word[i] == word[j]) {
                break;
            }
        }
        if (j == len) {
            switch (word[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    is_vowel = 1;
                    break;
            }
            if (is_vowel) {
                printf("%c ", word[i]);
            }
        }
    }
    printf("\n");    
    printf("Repeated letters: ");
    for (i = 0; i < len; i++) {
        count = 0;
        for (j = 0; j < len; j++) {
            if (i != j && word[i] == word[j]) {
                count++;
            }
        }
        if (count > 0) {
            printf("%c ", word[i]);
        }
    }
    printf("\n");

    return 0;
}
