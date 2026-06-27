//To Create salary management system
#include <stdio.h>

struct Salary {
    int empId;
    float baseSalary;
    float allowance;
    float totalSalary;
};

int main() {
    struct Salary s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Employee ID: ");
        scanf("%d", &s[i].empId);
        printf("Enter Base Salary: ");
        scanf("%f", &s[i].baseSalary);
        printf("Enter Allowance: ");
        scanf("%f", &s[i].allowance);
        
        s[i].totalSalary = s[i].baseSalary + s[i].allowance;
        printf("\n");
    }

    printf("--- Salary Breakdown ---\n");
    for(i = 0; i < 3; i++) {
        printf("Emp ID: %d | Base: %.2f | Allowance: %.2f | Total Salary: %.2f\n", 
               s[i].empId, s[i].baseSalary, s[i].allowance, s[i].totalSalary);
    }

    return 0;
}