#include <stdio.h>

int main() {
    int n, orig, rem, sum = 0, i, fact;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orig = n;

    while (n > 0) {
        rem = n % 10;
        
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        
        sum += fact;
        n /= 10;
    }

    if (sum == orig && orig > 0) {
        printf("%d is a strong number.\n", orig);
    } else {
        printf("%d is not a strong number.\n", orig);
    }

    return 0;
}