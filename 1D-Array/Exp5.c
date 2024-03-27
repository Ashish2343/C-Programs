#include<stdio.h>

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
void reverse(int arr[],int len){
    int i =0;
    int j = len-1;
    while(i<j){
            swap(&arr[i],&arr[j]);
            i++;
            j--;
    }
    disp(arr,len);
}
int main(){
        int arr[] = {1,2,3,4};
        int len = sizeof(arr)/sizeof(arr[0]);
        reverse(arr,len);
        return 0;
}