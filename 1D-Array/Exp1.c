#include<stdio.h>
void disp(int arr[],int len){
        int i=0;
        while(i<len){
            printf("%d ", arr[i]);
            i++;
        }
    printf("\n");
}

int sum(int arr[],int len){
    int sum = 0;
    int i =0;
    while (i<len){
       sum = sum + arr[i];
       i++;
    }
    printf("%d",sum);
    return sum;
}

int mul(int arr[],int len){
    int mul = 1;
    int i =0;
    while (i<len){
       mul = mul * arr[i];
       i++;
    }
    printf("\n%d",mul);
    return mul;
}
void main(){
    int arr[] = {1,5,1,6,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    disp(arr,len);
    sum(arr,len);
    mul(arr,len);
}