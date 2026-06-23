//To Check anagram strings
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the strings
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Count frequency of each character in the first string
    for (i = 0; str1[i] != '\0'; i++) {
        freq[str1[i]]++;
    }

    // Decrease frequency based on the second string
    for (i = 0; str2[i] != '\0'; i++) {
        freq[str2[i]]--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}