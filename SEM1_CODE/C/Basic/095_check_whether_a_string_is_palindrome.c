#include <stdio.h>

int main(void) {
    char str[] = "racecar";                                      // Initialize variable
    int len = 0, isPal = 1;                                      // Initialize variable
    while (str[len] != '\0') len++;                              // Iterate through loop

    for (int i = 0, j = len - 1; i < j; i++, j--) {              // Iterate through loop
        if (str[i] != str[j]) {                                  // Check condition
            isPal = 0;                                           // Perform calculation
            break;
        }
    }

    if (isPal) printf("\"%s\" is a Palindrome string.\n", str);  // Display check whether a string is palind... result
    else printf("\"%s\" is NOT a Palindrome string.\n", str);    // Display check whether a string is palind... result
    return 0;                                                    // Exit program successfully
}
