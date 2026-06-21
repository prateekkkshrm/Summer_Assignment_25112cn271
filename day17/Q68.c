//TO FIND COMMON ELEMENTS IN N ARRAYS
#include <stdio.h>
int main(){
    int i, j, k = 0, n, a, b, c[100], d[100], common_array[100];

    printf("Enter no. of arrays to be compared\n");
    scanf("%d", &n);

    printf("Enter no. of elements in array 1\n");
    scanf("%d", &a);

    printf("Enter the elements:\n");
    for(i = 0; i < a; i++){
        scanf("%d", &c[i]);
    }       

    for(i = 2; i <= n; i++){
        printf("Enter no. of elements in array %d\n", i);
        scanf("%d", &b);

        printf("Enter the elements:\n");
        for(j = 0; j < b; j++){
            scanf("%d", &d[j]);
        }

        for(j = 0; j < a; j++){
            for(k = 0; k < b; k++){
                if(c[j] == d[k]){
                    common_array[k] = c[j];
                    break;
                }
            }
        }

        a = k;
        for(j = 0; j < a; j++){
            c[j] = common_array[j];
        }
    }
    return 0;
}