#include <stdio.h>

void displayArray(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sum(int mat1[][3], int mat2[][3], int rows, int cols){
        int result [rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    displayArray(result,3,3);
}
void mul(int mat1[][3], int mat2[][3], int rows, int cols){
        int result [rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            result[i][j] = mat1[i][j] * mat2[i][j];
        }
    }
    displayArray(result,3,3);
}

void main() {
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[3][3] = {
        {2,4,6},
        {2,5,7},
        {4,9,1}
    };

    int rows = 3;
    int cols = 3;

    displayArray(mat1, rows, cols);
    displayArray(mat2,rows,cols);
    sum(mat1,mat2,3,3);
    mul(mat1,mat2,3,3);
    
}
