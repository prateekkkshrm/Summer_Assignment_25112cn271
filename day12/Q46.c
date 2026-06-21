//FOR ARMSTRONG NUMBER
#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int sum=0, temp=n, count=0;

    while(temp>0){
        count++;
        temp /= 10;
    }

    temp = n; // Reset temp to the original number

    while(temp>0){
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n) == n){
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}