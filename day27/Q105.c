// To Create student record management system
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%d", &s[i].rollNo);
        printf("Enter Name for student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter Marks for student %d: ", i + 1);
        scanf("%f", &s[i].marks);
        printf("\n");
    }

    printf("--- Student Records ---\n");
    for(i = 0; i < 3; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}