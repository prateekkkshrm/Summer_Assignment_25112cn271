#include <stdio.h>

int main() {
    int arr[100], size = 0, choice, i, element, pos;

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                arr[size] = element;
                size++;
                printf("Element inserted.\n");
                break;
            case 2:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Enter position to delete (0 to %d): ", size - 1);
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= size) {
                        printf("Invalid position!\n");
                    } else {
                        for (i = pos; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element deleted.\n");
                    }
                }
                break;
            case 3:
                if (size == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
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