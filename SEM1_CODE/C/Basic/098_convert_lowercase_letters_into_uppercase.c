#include <stdio.h>

int main(void) {
    char str[] = "hello world from c!";        // Initialize variable
    printf("Original : %s\n", str);            // Display convert lowercase letters into u... result
    for (int i = 0; str[i] != '\0'; i++) {     // Iterate through loop
        if (str[i] >= 'a' && str[i] <= 'z') {  // Check condition
            str[i] = str[i] - 32;              // Perform calculation
        }
    }
    printf("Uppercase: %s\n", str);            // Display convert lowercase letters into u... result
    return 0;                                  // Exit program successfully
}
