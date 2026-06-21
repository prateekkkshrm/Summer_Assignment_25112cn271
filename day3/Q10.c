#include<stdio.h>
int main(){
    int n, a, b, flag=0, i;

    printf("Enter lower limit: ");
    scanf("%d", &a);
    
    printf("Enter upper limit: ");
    scanf("%d", &b);
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<=1)
    printf("not prime");

    for(i=2; i<=n/2; i++)
        if(n%i==0){
            flag=1;
            break;
        }

        if(n>=a && n<=b){
            if(flag==0)
            printf("prime");
            else
            printf("not prime");   
        }
        else
        printf("not in range");

return 0;


}