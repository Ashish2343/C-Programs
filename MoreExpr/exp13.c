  #include <stdio.h>
#include <math.h>
// Function to calculate the number of digits in a number
int count(int num) {
    int counter = 0;
    while (num != 0) {
        num /= 10;
        counter++;
    }
    return counter; }
// Function to check if a number is an Armstrong number
int checkArmstrong(int num) {
    int originalNum = num;
    int numDigits = count(num);
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;   }  
    return (sum == originalNum);
}
// Function to print Armstrong numbers from 1 to N
void printNumbers(int N) {
    printf("Armstrong numbers from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (checkArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
      printNumbers(N);      
  return 0;}
