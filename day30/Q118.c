#include <stdio.h>

int main() {
    int bookIds[50];
    char titles[50][50];
    int count = 0, choice, i;

    do {
        printf("\n--- Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookIds[count]);
                printf("Enter Book Title: ");
                scanf("%s", titles[count]);
                count++;
                printf("Book added successfully.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("Library is empty.\n");
                } else {
                    printf("\nBook ID\tTitle\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%s\n", bookIds[i], titles[i]);
                    }
                }
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}