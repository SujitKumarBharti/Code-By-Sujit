#include <stdio.h>

int main(void) {
    char ch;                                                     // Declare variables for calculation
    printf("Enter a character: ");                               // Prompt user for input
    if (scanf(" %c", &ch) == 1) {                                // Read input from user
        printf("The ASCII value of '%c' is %d\n", ch, (int)ch);  // Display find the ASCII value of a character result
    }
    return 0;                                                    // Exit program successfully
}
