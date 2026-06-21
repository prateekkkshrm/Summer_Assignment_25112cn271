// TO CHECK SYMMETRIC MATRIX
#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j, symmetric = 1;

    printf("Enter rows and columns for the matrix: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Matrix is not square, hence cannot be symmetric.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Checking for symmetry
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}