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
void SumofArr(int mat[][3], int rows, int cols){
    int sum;
    for(int i=0; i<rows; i++){
         sum = 0;
        for(int j=0; j<cols; j++){
            sum += mat[i][j];
        }
        printf("Row %d: %d\n ",i+1, sum);
    }
}
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    SumofArr(arr,3,3);
    rowSum(arr,3,3);
    return 0;
}