//find missing term in array
#include <stdio.h>
int main(){
    int arr[100], i, n, missingterm, sum = 0, total;

    printf("Enter the number of elements present in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
   
    int total_elements = n + 1;
    total = total_elements * (total_elements + 1) / 2;

    missingterm = total - sum;

    printf("The missing term is: %d", missingterm);

    return 0;
}
