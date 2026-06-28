#include <stdio.h>

int main() {
    int ids[50], quantities[50];
    int count = 0, choice, i, searchId, found;

    do {
        printf("\n--- Inventory Management ---\n");
        printf("1. Add Item\n");
        printf("2. View Inventory\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &ids[count]);
                printf("Enter Quantity: ");
                scanf("%d", &quantities[count]);
                count++;
                printf("Item added successfully.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("Inventory is empty.\n");
                } else {
                    printf("\nID\tQuantity\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%d\n", ids[i], quantities[i]);
                    }
                }
                break;
            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);
                found = 0;
                for (i = 0; i < count; i++) {
                    if (ids[i] == searchId) {
                        printf("Item Found! ID: %d, Quantity: %d\n", ids[i], quantities[i]);
                        found = 1;
                        break;
                    }
                }
                if (found == 0) {
                    printf("Item not found.\n");
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