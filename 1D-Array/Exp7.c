# include<stdio.h> 

int occurence(int arr[], int len, int num){
    int count = 0;
    for(int i =0; i<len; i++){
        if (arr[i]== num) count++;
        else continue;
    }
    if(count ==0){
        printf("Num not exist in array");
        return -1;
    }else{
        printf("%d", count);
        return count;
    }
}
int main(){
    int arr[] = {2,5,1,6,3,6,3,6};
    int len =  sizeof(arr)/sizeof(arr[0]);
    occurence(arr,len,6);
    return 0;
}