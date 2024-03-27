#include<stdio.h>

int small(int arr[],int len){
    int s = 999999;
    for(int i=0; i<len; i++){
        if(arr[i] < s) s = arr[i];
        else continue;
    }
    printf("%d",s);
    printf("\n");
    return s;
}
int large(int arr[],int len){
    int l = -999999;
    for(int i=0; i<len; i++){
        if(arr[i] > l) l = arr[i];
        else continue;
    }
    printf("%d",l);
    printf("\n");
    return l;
}
void main(){
    int arr [] = {2,6,0,7,3,9,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    small(arr,len);
    large(arr,len);
}