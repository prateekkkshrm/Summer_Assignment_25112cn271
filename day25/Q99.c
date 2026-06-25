// To Sort names alphabetically
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int n = 5;

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Sorted names: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", names[i]);
    }
    printf("\n");

    return 0;
}