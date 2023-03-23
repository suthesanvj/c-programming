#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int max_freq = 0, max_index;

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_index = i;
        }
    }

    printf("The maximum occurring character in the string is '%c' with frequency %d\n", max_index, max_freq);

    return 0;
}

