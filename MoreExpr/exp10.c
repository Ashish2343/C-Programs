#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Convert lowercase to uppercase
    }
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a VOWEL.\n", ch);
    } else {
        printf("%c is a CONSONANT.\n", ch);
    }
    return 0;
}
