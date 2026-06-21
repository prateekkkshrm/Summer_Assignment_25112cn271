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
    int l, h, i;

    printf("Enter range: ");
    scanf("%d %d", &l, &h);

    printf("Armstrong numbers: ");
    for (i = l; i <= h; i++) {
        if (i <= 0) {
            continue; 
        }
        
        if (isArm(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}