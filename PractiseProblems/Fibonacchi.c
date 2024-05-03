#include<stdio.h>
  
// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    printf("Recursive fibonacci ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main(){

    // Iteratively
    int a = 0, b = 1;
    int c;
    for(int i =0; i<10; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c; 
        printf("\n");    
    }
    // Recursively
    printFibonacci(10);

}