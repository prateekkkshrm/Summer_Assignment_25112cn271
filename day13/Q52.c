//COUNT EVEN AND ODD ELEMENTS IN AN ARRAY
#include <stdio.h>

int main(){

    int arr[100], n, evenCount = 0, oddCount = 0, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);    

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);   

    return 0;
}









