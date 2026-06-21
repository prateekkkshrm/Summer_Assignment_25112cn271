#include <stdio.h>

int main() {
    int n;
    // Using long long handles larger numbers without overflowing quickly
    long long a = 0, b = 1, next;

    // 1. Get the number of terms from the user
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);

    // Validation check for proper inputs
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: ", n);

    // 2. Loop to generate and print each term
    for (int i = 1; i <= n; i++) {
        // Print the current term
        printf("%lld ", a);

        // Calculate the next term in line
        next = a + b;

        // Shift our markers one step forward
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}