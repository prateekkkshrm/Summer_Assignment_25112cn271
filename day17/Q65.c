//TO MERGE ARRAYS
#include <stdio.h>
int main() {
    int i, j, k = 0, n, merged_array[100], a;

    printf("Enter no. of arrays to be merged\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("enter no. of elements in array %d\n", i);
        scanf("%d", &a);
        
        printf("Enter the elements:\n");
        for(j = 0; j < a; j++) {
            scanf("%d", &merged_array[k]);
            k++; 
        }
    }
    printf("\nMerged Array: [");
    for(i = 0; i < k; i++) {
        printf("%d", merged_array[i]);
        if(i < k - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}