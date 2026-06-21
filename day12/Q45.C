#include <stdio.h>

int palin(int n){

    int orig;
    int rev; 
    int rem;

    orig = n;
    rev =0;

    while(n>0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    return rev;
}

int main(){
    int n, orig, rev=0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    if( palin(n) == n){
        printf("%d is a palindrome number.", n);
    }
    else{
        printf("%d is not a palindrome number.", n);
    }
    return 0;
}