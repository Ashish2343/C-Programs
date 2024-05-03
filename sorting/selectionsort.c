#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void disp(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionsort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min = i;
        for(int j= i+1; j<size; j++){
            if(arr[min]> arr[j]){
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr, size);
    disp(arr, size);
}