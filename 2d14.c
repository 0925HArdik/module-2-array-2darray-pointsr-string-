//WAP to input a matrix and print its upper triangular matrix.
#include <stdio.h>

#define M 3
#define N 3

int main() {
    int array[M][N];
    int i, j;

    // Input elements of the array
    printf("Enter elements of the %dx%d array:\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Print the upper triangular matrix
    printf("Upper triangular matrix:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (i <= j) {
                printf("%d ", array[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

