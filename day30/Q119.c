#include <stdio.h>

int main() {
    int empIds[50];
    char empNames[50][50];
    float salaries[50];
    int count = 0, choice, i;

    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empIds[count]);
                printf("Enter Name: ");
                scanf("%s", empNames[count]);
                printf("Enter Salary: ");
                scanf("%f", &salaries[count]);
                count++;
                printf("Employee record saved.\n");
                break;
            case 2:
                if (count == 0) {
                    printf("No employee records to display.\n");
                } else {
                    printf("\nID\tName\tSalary\n");
                    for (i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n", empIds[i], empNames[i], salaries[i]);
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