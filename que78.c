//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int n;
    int matrix[100][100];
    int diagonalSum = 0;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal elements: %d\n", diagonalSum);

    return 0;
}