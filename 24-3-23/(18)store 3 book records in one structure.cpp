#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book book1, book2, book3;
    
    printf("Enter details for book 1:\n");
    printf("Title: ");
    scanf("%s", book1.title);
    printf("Author: ");
    scanf("%s", book1.author);
    printf("Year of publication: ");
    scanf("%d", &book1.year);
    
    printf("\nEnter details for book 2:\n");
    printf("Title: ");
    scanf("%s", book2.title);
    printf("Author: ");
    scanf("%s", book2.author);
    printf("Year of publication: ");
    scanf("%d", &book2.year);
    
    printf("\nEnter details for book 3:\n");
    printf("Title: ");
    scanf("%s", book3.title);
    printf("Author: ");
    scanf("%s", book3.author);
    printf("Year of publication: ");
    scanf("%d", &book3.year);
    
    printf("\nBook Details:\n");
    printf("Book 1: %s, %s, %d\n", book1.title, book1.author, book1.year);
    printf("Book 2: %s, %s, %d\n", book2.title, book2.author, book2.year);
    printf("Book 3: %s, %s, %d\n", book3.title, book3.author, book3.year);
    
    return 0;
}

