#include<stdio.h>

// Function to merge two arrays into a third array
void mergeArray(int arr1[], int arr2[], int arr3[], int size1, int size2){
    int i = 0, j = 0, k = 0;

    // Merge elements of arr1 and arr2 into arr3
    while(i < size1){
        arr3[k++] = arr1[i++];
    }
    while(j < size2){
        arr3[k++] = arr2[j++];
    }
}

// Function to print an array
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[] = {4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int arr3[size1 + size2];

    printf("Array 1: ");
    printArray(arr1, size1);
    printf("Array 2: ");
    printArray(arr2, size2);

    mergeArray(arr1, arr2, arr3, size1, size2);

    printf("Merged array: ");
    printArray(arr3, size1 + size2);

    return 0;
}

