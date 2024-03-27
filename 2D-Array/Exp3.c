#include<stdio.h>
void dispArray(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void dispDiagnoal(int mat[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols ; j++){
            if(i==j)   printf("%d ", mat[i][j]);
        }
    }
    printf("\n");
}
int main(){
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
dispDiagnoal(mat,3,3);
}