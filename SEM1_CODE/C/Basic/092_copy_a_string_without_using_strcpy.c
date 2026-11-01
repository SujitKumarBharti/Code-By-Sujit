#include <stdio.h>

int main(void) {
    char src[] = "Hello Antigravity";        // Initialize variable
    char dest[100];                          // Declare variables for calculation
    int i = 0;                               // Initialize variable
    while (src[i] != '\0') {                 // Iterate through loop
        dest[i] = src[i];                    // Perform calculation
        i++;
    }
    dest[i] = '\0';                          // Perform calculation
    printf("Source     : %s\n", src);        // Display copy a string without using strc... result
    printf("Copied Dest: %s\n", dest);       // Display copy a string without using strc... result
    return 0;                                // Exit program successfully
}
