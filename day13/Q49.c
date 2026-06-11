//TO INPUT AND DISPLAY ARRAY
#include<stdio.h>
int main(){
    int arr[100], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    //to take input
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    //to display input
    printf("The elements of the array are: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}