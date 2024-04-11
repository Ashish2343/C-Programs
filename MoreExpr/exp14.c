#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid
    int i, j;

    for (i = 1; i <= rows; ++i) {
        // Print stars in increasing order
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");
    }
    
    printf("Name - Ashish \n");
    printf("Roll No. - 23/MC/35 \n");
    return 0;
}