#include <stdio.h>

int main() {
    int rollNumbers[50];
    char names[50][50];
    float marks[50];
    int count = 0, choice, i;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &rollNumbers[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Marks: ");
                scanf("%f", &marks[count]);
                count++;
                printf("Student added.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No records found.\n");
                } else {
                    printf("\nRoll No\tName\tMarks\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n", rollNumbers[i], names[i], marks[i]);
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