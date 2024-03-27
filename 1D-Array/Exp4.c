#include<stdio.h>

int find(int arr[], int len, int num){
        for(int i=0; i<len; i++){
            if(arr[i]==num){
            printf("The index of num is %d",i);   
            return i;}
            else continue;
        }
    return -1;
}
int main(){
    int arr[] = {2,5,8,1,4,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    find(arr,len,1);
    return 0;
}