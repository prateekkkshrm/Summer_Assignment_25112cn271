// To Create employee management system
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
};

int main() {
    struct Employee e[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter ID for employee %d: ", i + 1);
        scanf("%d", &e[i].id);
        printf("Enter Name for employee %d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter Department for employee %d: ", i + 1);
        scanf("%s", e[i].department);
        printf("\n");
    }

    printf("--- Employee Records ---\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Department: %s\n", e[i].id, e[i].name, e[i].department);
    }

    return 0;
}