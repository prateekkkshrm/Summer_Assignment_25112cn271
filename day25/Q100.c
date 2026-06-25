// To Sort words by length
#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = 5;

    // Bubble sort by length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char temp[20];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Sorted words by length: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}