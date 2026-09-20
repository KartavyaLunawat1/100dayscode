//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];

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

    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal traversal:\n");

    // There are (rows + cols - 1) diagonals in total
    for (int d = 0; d < rows + cols - 1; d++) {
        // Elements on diagonal d satisfy i + j = d
        int rowStart = (d < cols) ? 0 : d - cols + 1;
        int rowEnd = (d < rows) ? d : rows - 1;

        for (int i = rowStart; i <= rowEnd; i++) {
            int j = d - i;
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}