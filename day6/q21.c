#include<stdio.h>
int main(){
    int n,bin=0 ,r, i;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    for(i=1;n>0;i*=10){
        r=n%2;
        bin=bin+r*i;
        n/=2;
    }
    printf("Binary equivalent: %d",bin);
    return 0;
}