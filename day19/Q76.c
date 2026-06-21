//WRITE A PROGRAM TO FIND SUM OF DIAGONAL ELEMENTS OF A MATRIX
#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter the number of rows and columns of matrix:");
    scanf("%d %d",&r,&c);
    
    printf("Enter the elements of matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                sum+=a[i][j];
            }
        }
    }
    printf("The sum of diagonal elements of the matrix is:%d",sum);
    return 0;
}