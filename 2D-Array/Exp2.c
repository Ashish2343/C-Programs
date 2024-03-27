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
void swap(int i, int j){
    int temp;
    temp = i;
    i = j;
    j = temp;
}
void transpose(int mat[][3], int rows, int cols){
   int  trans[3][3];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            trans[i][j] = mat [j][i];
        }
    } 
    dispArray(trans,3,3);  
}


int main(){
    int mat1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    dispArray(mat1,3,3);
    transpose(mat1,3,3);
    return 0;
}