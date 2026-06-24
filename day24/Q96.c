// To Remove duplicate characters.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char result[100] = "";
    int index = 0;

    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < index; j++) {
            if (str[i] == result[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[index++] = str[i];
        }
    }
    result[index] = '\0'; // Null-terminate the result string

    printf("String after removing duplicates: %s\n", result);
    return 0;
}
