//WRITE A PROGRAM TO ADD MATRIX
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the number of rows and columns of second matrix:");
    scanf("%d %d",&r2,&c2);
    
    if(r1!=r2 || c1!=c2){
        printf("Matrix addition is not possible");
        return 0;
    }
    printf("Enter the elements of first matrix:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("The difference of the two matrices is:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}