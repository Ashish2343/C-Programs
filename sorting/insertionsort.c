#include<stdio.h>


void disp(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionsort(int arr[], int size){ // Increasing order
    for(int i= 1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]  = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}
void insertionsort2(int arr[], int size){   // Decreasing order
    for(int i= 1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]<temp){
            arr[j+1]  = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}

int main(){
    int arr1[] = {5,4,3,2,1};
    int arr2[] = {1,2,3,4,5};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    insertionsort(arr1, size);
    insertionsort2(arr2,size);
    disp(arr1, size);
    disp(arr2, size);
}