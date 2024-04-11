#include <stdio.h>
void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = *consonants = 0;
    while (*str) {
        // Convert character to lowercase
    char ch = *str | 32; 
// Equivalent to tolower() for ASCII characters
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}
int main() {
    char str[100];
    int vowels, consonants;

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants using pointers
    countVowelsAndConsonants(str, &vowels, &consonants);

    // Print the count of vowels and consonants
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
