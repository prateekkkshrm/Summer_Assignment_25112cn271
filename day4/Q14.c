#include<stdio.h>
int main(){

    long long int n, a, b, next;

    printf("enter the nth term of the fibonacci series:");
    scanf("%lld",&n);

    // 1. Handle base cases by printing the answer and exiting
    if (n == 0) {
        printf("your nth term of the fibonacci series is: 0\n");
        return 0;
    }
    if (n == 1) {
        printf("your nth term of the fibonacci series is: 1\n");
        return 0;
    }

    // 2. CRITICAL: Initialize your variables here!
    a = 0;
    b = 1;

    // 3. Run the loop from 2 up to n
    for (long long int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    printf("your nth term of the fibonacci series is: %lld\n", next);
    return 0;
}