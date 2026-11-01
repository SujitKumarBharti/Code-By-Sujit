#include <stdio.h>

int main(void) {
    char str[] = "C P r o g r a m m i n g";  // Initialize variable
    int j = 0;                               // Initialize variable
    printf("Before: \"%s\"\n", str);         // Display remove spaces from a string result
    for (int i = 0; str[i] != '\0'; i++) {   // Iterate through loop
        if (str[i] != ' ') {                 // Check condition
            str[j++] = str[i];               // Perform calculation
        }
    }
    str[j] = '\0';                           // Perform calculation
    printf("After : \"%s\"\n", str);         // Display remove spaces from a string result
    return 0;                                // Exit program successfully
}
