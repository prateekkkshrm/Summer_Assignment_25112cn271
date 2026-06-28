#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are equal.\n");
                } else {
                    printf("Strings are not equal.\n");
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}