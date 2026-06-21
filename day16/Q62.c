// find element of maximum frequency in array
#include <stdio.h>
int main(){
    int arr[100], i, n, max_freq = 0, freq_element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        int count = 1;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > max_freq){
            max_freq = count;
            freq_element = arr[i];
        }
    }

    printf("The element with maximum frequency is: %d", freq_element);

    return 0;
}

