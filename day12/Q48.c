//FOR PERFECT NUMBER
#include <stdio.h>
int perf(int n){

    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(perf(n)==n){
        printf("%d is a perfect number.",n);
    }
    else{
        printf("%d is not a perfect number.",n);
    }
    return 0;
}
