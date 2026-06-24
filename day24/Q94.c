// To Compress a string
#include <stdio.h>
#include <string.h> 
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    char compressed[200] = ""; // To store the compressed string
    int count = 1;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            char temp[10];
            sprintf(temp, "%c%d", str[i], count);
            strcat(compressed, temp);
            count = 1;
        }
    }

    printf("Compressed string: %s\n", compressed);
    return 0;
}