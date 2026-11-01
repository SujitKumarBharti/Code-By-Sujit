#include <ctype.h>
#include <stdio.h>
#include <string.h>

int is_palindrome(const char text[]) {
    size_t left = 0;                                                          // Calculate and assign value
    size_t right = strlen(text);                                              // Calculate and assign value

    while (left < right) {                                                    // Iterate while condition holds
        while (left < right && !isalnum((unsigned char)text[left])) {         // Iterate while condition holds
            left++;                                                           // Increment counter
        }
        while (left < right && !isalnum((unsigned char)text[right - 1])) {    // Iterate while condition holds
            right--;                                                          // Decrement counter
        }
        if (tolower((unsigned char)text[left]) !=                             // Check condition
            tolower((unsigned char)text[right - 1])) {
            return 0;                                                         // Exit program successfully
        }
        left++;                                                               // Increment counter
        right--;                                                              // Decrement counter
    }
    return 1;                                                                 // Exit with error status code
}

int main(void) {
    char text[200];                                                           // Declare variable

    printf("Enter a string: ");                                               // Prompt user to enter a string
    if (fgets(text, sizeof(text), stdin) == NULL) {                           // Read a complete line
        return 1;                                                             // Exit with error status code
    }
    text[strcspn(text, "\n")] = '\0';                                         // Calculate and assign value

    printf("%s\n", is_palindrome(text) ? "Palindrome" : "Not a palindrome");  // Display , is_palindrome(text) ?
    return 0;                                                                 // Exit program successfully
}
