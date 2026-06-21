//Find Smallest and Largest number in Array
#include <stdio.h>
int main (){
    int arr[100], n, small, large, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){ 
        scanf("%d", &arr[i]);
    }   
    small = arr[0]; 
    large = arr[0];

    for(i=1; i<n; i++){
        if(arr[i] < small){
            small = arr[i];
        }
        if(arr[i] > large){
            large = arr[i];
        }
    }

    printf("The smallest number in the array is: %d\n", small);
    printf("The largest number in the array is: %d\n", large);

    return 0;
}




