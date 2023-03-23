#include <stdio.h>
#include <stdlib.h>
#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int main() {
    FILE *fp;
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int i = 0;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    while (fgets(lines[i], MAX_LINE_LENGTH, fp)) {
        i++;
        if (i == MAX_LINES) {
            printf("Maximum number of lines exceeded\n");
            exit(1);
        }
    }

    fclose(fp);

    printf("Lines in the file:\n");
    for (int j = 0; j < i; j++) {
        printf("%s", lines[j]);
    }

    return 0;
}

