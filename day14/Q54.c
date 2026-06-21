//TO FIND FREQUENCY OF ELEMENT
#include <stdio.h>
int main()
{
    int n, i, key, count=0;
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
        
            count++;   
        }   
    }
    printf("Element found %d times in the array.\n", count);
    return 0;
}