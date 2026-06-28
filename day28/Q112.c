//CONTACT MANAGEMENT SYSTEM
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Name for contact %d: ", i + 1);
        scanf("%s", c[i].name);
        printf("Enter Phone Number for contact %d: ", i + 1);
        scanf("%s", c[i].phone);
        printf("\n");
    }

    printf("--- Contact List ---\n");
    for(i = 0; i < 3; i++) {
        printf("Name: %s | Phone: %s\n", c[i].name, c[i].phone);
    }

    return 0;
}