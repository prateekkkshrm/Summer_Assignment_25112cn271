//To Find maximum occurring character.
#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find the maximum occurring character
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character is: %c\n", maxChar);
    return 0;
}
