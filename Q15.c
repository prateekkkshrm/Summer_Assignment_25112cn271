#include <stdio.h>
#include <math.h>

int isArm(int n) {
    int orig = n, rem, d = 0;
    double res = 0.0;

    int t = n;
    while (t != 0) {
        t /= 10;
        d++;
    }

    t = n;
    while (t != 0) {
        rem = t % 10;
        res += round(pow(rem, d)); 
        t /= 10;
    }

    return ((int)res == orig);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (isArm(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}