#include <stdio.h>

int main(void) {
    char str[] = "Programming in C";                  // Initialize variable
    int length = 0;                                   // Initialize variable
    while (str[length] != '\0') {                     // Iterate through loop
        length++;
    }
    printf("String: \"%s\"\n", str);                  // Display find the length of a string with... result
    printf("Length without strlen(): %d\n", length);  // Display find the length of a string with... result
    return 0;                                         // Exit program successfully
}
