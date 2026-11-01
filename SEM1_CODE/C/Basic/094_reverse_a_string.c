#include <stdio.h>

int main(void) {
    char str[] = "Antigravity";                      // Initialize variable
    int len = 0;                                     // Initialize variable
    while (str[len] != '\0') len++;                  // Iterate through loop

    printf("Original: %s\n", str);                   // Display reverse a string result
    for (int i = 0, j = len - 1; i < j; i++, j--) {  // Iterate through loop
        char temp = str[i];                          // Initialize variable
        str[i] = str[j];                             // Perform calculation
        str[j] = temp;                               // Perform calculation
    }
    printf("Reversed: %s\n", str);                   // Display reverse a string result
    return 0;                                        // Exit program successfully
}
