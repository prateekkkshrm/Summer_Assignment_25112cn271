//LIBRARY MANAGEMENT SYSTEM
#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Book ID: ");
        scanf("%d", &b[i].bookId);
        printf("Enter Book Title: ");
        scanf("%s", b[i].title);
        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
        printf("\n");
    }

    printf("--- Library Books ---\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d | Title: %s | Author: %s\n", b[i].bookId, b[i].title, b[i].author);
    }

    return 0;
}