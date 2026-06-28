//TICKET BOOKING SYSTEM
#include <stdio.h>

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    printf("\n--- Account Details ---\n");
    printf("Account No: %d\n", acc.accountNo);
    printf("Holder Name: %s\n", acc.name);
    printf("Current Balance: %.2f\n", acc.balance);

    return 0;
}