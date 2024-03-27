# include <stdio.h> 

int findmissing(int arr[], int len){
   int xor1 = 0;
   for(int i=0; i<=len;i++){
        xor1 = xor1 ^ i;  
   }
   for(int i=0; i<len; i++){
        xor1 = xor1 ^ arr[i];
   }
    printf("%d", xor1);
    return xor1;
}

void main(){
    int arr[] = {0,1,2,3,4,5,6,7,9};
    int len =  sizeof(arr)/sizeof(arr[0]);
    findmissing(arr,len);
}