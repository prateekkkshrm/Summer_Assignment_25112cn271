//TO FIND DUPLICATES IN ARRAY
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("Duplicate elements are: %d", arr[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0) {
        printf("None");
    }
    
    printf("\n");
    return 0;
}