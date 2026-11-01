#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch, lower;                                                                            // Declare variables for calculation
    printf("Enter an alphabet: ");                                                             // Prompt user for input
    if (scanf(" %c", &ch) == 1) {                                                              // Read input from user
        lower = tolower(ch);                                                                   // Perform calculation
        if (lower >= 'a' && lower <= 'z') {                                                    // Check condition
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')  // Check condition
                printf("'%c' is a Vowel.\n", ch);                                              // Display check whether a character is a v... result
            else
                printf("'%c' is a Consonant.\n", ch);                                          // Display check whether a character is a v... result
        } else {
            printf("'%c' is not an alphabetic character.\n", ch);                              // Display check whether a character is a v... result
        }
    }
    return 0;                                                                                  // Exit program successfully
}
