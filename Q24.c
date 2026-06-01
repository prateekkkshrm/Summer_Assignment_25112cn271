#include <stdio.h>

int main() {
    int x, n, i;
    int res = 1;

    printf("Enter base (x) and power (n): ");
    scanf("%d %d", &x, &n);

    for (i = 0; i < n; i++) {
        res = res * x;
    }

    printf("Result: %d\n", res);

    return 0;
}