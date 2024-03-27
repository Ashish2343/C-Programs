#include<stdio.h>

int main(){
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++){
        // Print spaces
        for(j = 1; j <= 5 - i; j++){
            printf(" ");
        }
        // Print asterisks
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        // Print asterisks again (to double the number of asterisks in each row)
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
