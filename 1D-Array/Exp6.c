#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp; 
}
void disp(int arr[],int len){
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void SwapAdj(int arr[],int len){
    int i =0;
    for(i=0; i<len-1;i=i+2){
            swap(&arr[i],&arr[i+1]);
    }
    disp(arr,len);
}
int main(){
        int arr[] = {1,2,3};
        int len = sizeof(arr)/sizeof(arr[0]);
        SwapAdj(arr,len);
        return 0;
}