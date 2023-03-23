#include <stdio.h>

int main() {
    FILE *source_file, *dest_file;
    char source_file_name[50], dest_file_name[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source_file_name);

    printf("Enter destination file name: ");
    scanf("%s", dest_file_name);

    source_file = fopen(source_file_name, "r");

    if (source_file == NULL) {
        printf("Unable to open source file.");
        return 1;
    }

    dest_file = fopen(dest_file_name, "w");

    if (dest_file == NULL) {
        printf("Unable to create destination file.");
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(dest_file);

    return 0;
}

