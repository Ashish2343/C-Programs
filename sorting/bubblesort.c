#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void disp(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubblesort(int arr[], int size){       // returns array in increasing order
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void bubblesort2(int arr[], int size){
    for(int i = 0; i<size; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}




int main()
{
    int arr1[] = {5,4,3,2,1};
    int arr2[] = {1,2,3,4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    bubblesort(arr1, n);
    bubblesort2(arr2, n);
    disp(arr1, n);
    disp(arr2, n);
    return 0;
}
