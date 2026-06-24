//To Check string rotation
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if the lengths of the strings are equal
    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Concatenate str1 with itself
    char concatenated[200];
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(concatenated, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}