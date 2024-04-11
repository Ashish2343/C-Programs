#include <stdio.h>

int main() {
    int rows, cols, i, j, countZero = 0;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

   =
    int matrix[rows][cols];

   
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
            // Counting zero elements
            if (matrix[i][j] == 0) {
                countZero++;
            }
        }
    }

    // Printing the matrix
    printf("Matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Checking if the matrix is sparse
    if (countZero > (rows * cols) / 2) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }

    return 0;
}