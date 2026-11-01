#include <stdio.h>

int main(void) {
    char s1[] = "Hello";                                                  // Initialize variable
    char s2[] = "Hello";                                                  // Initialize variable
    int i = 0, equal = 1;                                                 // Initialize variable

    while (s1[i] != '\0' || s2[i] != '\0') {                              // Iterate through loop
        if (s1[i] != s2[i]) {                                             // Check condition
            equal = 0;                                                    // Perform calculation
            break;
        }
        i++;
    }

    if (equal) printf("Strings \"%s\" and \"%s\" are EQUAL.\n", s1, s2);  // Display compare two strings without usin... result
    else printf("Strings \"%s\" and \"%s\" are NOT equal.\n", s1, s2);    // Display compare two strings without usin... result
    return 0;                                                             // Exit program successfully
}
