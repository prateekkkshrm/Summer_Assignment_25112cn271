//TO FIND SUM AND AVERAGE OF ARRAY
#include<stdio.h>
int main(){
    int arr[100], n, i, sum=0;
    float avg;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    //to take input
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i]; //to calculate sum
    }

    //to calculate average
    avg = (float)sum / n;

    //to display sum and average
    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f\n", avg);

    return 0;
}