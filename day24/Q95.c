// To Find longest word
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char longest[100] = "";
    char current[100] = "";
    int maxLength = 0;
    int currentLength = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[currentLength++] = str[i];
        } else {
            current[currentLength] = '\0'; // Null-terminate the current word
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longest, current);
            }
            currentLength = 0; // Reset for the next word
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}