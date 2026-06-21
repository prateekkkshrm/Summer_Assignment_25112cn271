//TO FIND UNION OF TWO ARRAYS
#include <stdio.h>

int main() {
    int arr1[50], arr2[50], union_array[100];
    int a, b, k = 0;
    int i, j, dupe;

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
        union_array[k] = arr1[i];
        k++;
    }

    for(i = 0; i < b; i++) {
        dupe = 0;

        for(j = 0; j < k; j++) {
            if(union_array[j] == arr2[i]) {
                dupe = 1;
                break;
            }
        }

        if(dupe == 0) {
            union_array[k] = arr2[i];
            k++;
        }
    }

    printf("\nUnion Array: [");
    for(i = 0; i < k; i++) {
        printf("%d", union_array[i]);
        if(i < k - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
