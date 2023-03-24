#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book books[3];
    
    for(int i=0; i<3; i++) {
        printf("Enter details for book %d:\n", i+1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Year of publication: ");
        scanf("%d", &books[i].year);
    }
    
    printf("\nBook Details:\n");
    for(int i=0; i<3; i++) {
        printf("Book %d: %s, %s, %d\n", i+1, books[i].title, books[i].author, books[i].year);
    }
    
    return 0;
}

