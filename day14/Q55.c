//TO FIND SECOND LARGEST NUMBER IN ARRAY
#include <stdio.h>
int main() {
    int arr[100], n, i, largest, second_largest;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second_largest = arr[0]; //initialise the vlaues

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == largest) {
        printf("There is no second largest number in the array.\n");
    } else {
        printf("The second largest number in the array is: %d\n", second_largest);
    }
    return 0;
}





