//MOVE ALL ZEROES TO END
#include <stdio.h>

int main() {
    int arr[100];
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    while(count < n) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}