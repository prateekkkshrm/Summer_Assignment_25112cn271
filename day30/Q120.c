#include <stdio.h>

int productIds[50];
char productNames[50][50];
float prices[50];
int totalProducts = 0;

void addProduct() {
    printf("Enter Product ID: ");
    scanf("%d", &productIds[totalProducts]);
    printf("Enter Product Name: ");
    scanf("%s", productNames[totalProducts]);
    printf("Enter Product Price: ");
    scanf("%f", &prices[totalProducts]);
    totalProducts++;
    printf("Product added successfully!\n");
}

void displayProducts() {
    int i;
    if (totalProducts == 0) {
        printf("No products available.\n");
        return;
    }
    printf("\nID\tName\tPrice\n");
    for (i = 0; i < totalProducts; i++) {
        printf("%d\t%s\t%.2f\n", productIds[i], productNames[i], prices[i]);
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Store Management Project ---\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                printf("Exiting mini project...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}