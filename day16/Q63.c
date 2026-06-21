//TO FIND PAIR WITH GIVEN SUM IN AN ARRAY
#include <stdio.h>
int main(){
    int arr[100], i, n, sum;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum to find pairs: ");
    scanf("%d", &sum);

    printf("Pairs with given sum are: \n");
    for(i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}