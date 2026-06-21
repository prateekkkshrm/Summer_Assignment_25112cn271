//FOR LINEAR SEARCH
#include <stdio.h>
int main()
{
    int n, i, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index: %d\n", i);
            return 0;
        }
    }
    
    printf("Element not found in the array.\n");
    return 0;
}