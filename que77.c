//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int isDistinct = 1; // assume true initially

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal only makes sense for a square matrix
    if (rows != cols) {
        printf("\nDiagonal is not defined for a non-square matrix.\n");
        return 0;
    }

    // Check if any two diagonal elements are equal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal elements: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");

    if (isDistinct) {
        printf("\nThe diagonal elements are distinct.\n");
    } else {
        printf("\nThe diagonal elements are NOT distinct.\n");
    }

    return 0;
}