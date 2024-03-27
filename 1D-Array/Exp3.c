#include<stdio.h>

void disp(int arr[],int len){
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void replace(int arr[],int len){
    for(int i=0 ; i<len; i++){
        if(arr[i]%2==0) arr[i] = 0;
        else arr[i] = 1;
    }
    disp(arr,len);
}
void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    disp(arr,len);
    replace(arr,len);
}