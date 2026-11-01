#include <stdio.h>

int main(void) {
    char ch;                                               // Declare variables for calculation
    printf("Enter a character: ");                         // Prompt user for input
    if (scanf(" %c", &ch) == 1) {                          // Read input from user
        if (ch >= 'A' && ch <= 'Z')                        // Check condition
            printf("'%c' is an Uppercase letter.\n", ch);  // Display check whether a character is upp... result
        else if (ch >= 'a' && ch <= 'z')
            printf("'%c' is a Lowercase letter.\n", ch);   // Display check whether a character is upp... result
        else
            printf("'%c' is not a letter.\n", ch);         // Display check whether a character is upp... result
    }
    return 0;                                              // Exit program successfully
}
