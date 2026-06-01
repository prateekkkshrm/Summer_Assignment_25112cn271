#include <stdio.h>

int main() {
    int n, c = 0, orig;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orig = n;

    while (n > 0) {
        n = n & (n - 1);
        c++;
    }

    printf("Number of set bits in %d is: %d\n", orig, c);

    return 0;
}