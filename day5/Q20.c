#include <stdio.h>

int main() {
    int n, i, l = -1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n % 2 == 0) {
        l = 2;
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            l = i;
            n /= i;
        }
    }

    if (n > 2) {
        l = n;
    }

    printf("Largest prime factor is: %d\n", l);

    return 0;
}