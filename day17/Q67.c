//TO FIND INTERSECTION OF TWO ARRAYS
#include <stdio.h>
int main() {
    int arr1[50], arr2[50], intersection_array[50];
    int a, b, k = 0;
    int i, j;

    printf("Enter size of first array: ");
    scanf("%d", &a);
    printf("Enter elements of first array:\n");
    for(i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &b);
    printf("Enter elements of second array:\n");
    for(i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    for(i = 0; i < a; i++) {
        for(j = 0; j < b; j++) {
            if(arr1[i] == arr2[j]) {
                intersection_array[k] = arr1[i];
                k++;
                break;
            }
        }
    }

    printf("\nIntersection Array: [");
    for(i = 0; i < k; i++) {
        printf("%d", intersection_array[i]);
        if(i < k - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}