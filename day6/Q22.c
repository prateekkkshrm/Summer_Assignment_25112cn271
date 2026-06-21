#include <stdio.h>

int main() {
    int bin, dec = 0, rem, base = 1, orig;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    orig = bin;

    while (bin > 0) {
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin = bin / 10;
    }

    printf("Decimal of %d is: %d\n", orig, dec);

    return 0;
}