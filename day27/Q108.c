// to Create marksheet generation system
#include <stdio.h>

struct Marksheet {
    int rollNo;
    char name[50];
    int math;
    int science;
    int english;
    float total;
    float percentage;
};

int main() {
    struct Marksheet m;

    printf("Enter Roll Number: ");
    scanf("%d", &m.rollNo);
    printf("Enter Student Name: ");
    scanf("%s", m.name);
    printf("Enter Math Marks: ");
    scanf("%d", &m.math);
    printf("Enter Science Marks: ");
    scanf("%d", &m.science);
    printf("Enter English Marks: ");
    scanf("%d", &m.english);

    m.total = m.math + m.science + m.english;
    m.percentage = (m.total / 300.0) * 100.0;

    printf("\n=============================\n");
    printf("          MARKSHEET          \n");
    printf("=============================\n");
    printf("Roll No: %d\n", m.rollNo);
    printf("Name:    %s\n", m.name);
    printf("-----------------------------\n");
    printf("Math:    %d\n", m.math);
    printf("Science: %d\n", m.science);
    printf("English: %d\n", m.english);
    printf("-----------------------------\n");
    printf("Total:   %.1f / 300\n", m.total);
    printf("Percent: %.2f%%\n", m.percentage);
    printf("=============================\n");

    return 0;
}