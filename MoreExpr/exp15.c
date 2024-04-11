#include <stdio.h>

int main() {
   int rows = 5; // Number of rows in the pyramid
    int i, j;

    for (i = rows; i >= 1; --i) {
        // Print stars in decreasing order
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");
    }
    
    printf("Name - Ashish \n");
    printf("Roll No. - 23/MC/35 \n");
    return 0;
}