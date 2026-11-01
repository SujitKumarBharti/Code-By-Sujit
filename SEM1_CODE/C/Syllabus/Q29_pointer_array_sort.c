#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
    int values[ARRAY_SIZE];                                                                   // Declare variable
    int *numbers = values;                                                                    // Initialize variable

    printf("Enter %d integers: ", ARRAY_SIZE);                                                // Prompt user to enter %d integers
    for (int index = 0; index < ARRAY_SIZE; index++)                                          // Loop through elements
        if (scanf("%d", numbers + index) != 1) return 1;                                      // Read user input values
    for (int end = ARRAY_SIZE - 1; end > 0; end--) {                                          // Loop through elements
        for (int index = 0; index < end; index++) {                                           // Loop through elements
            if (*(numbers + index) > *(numbers + index + 1)) {                                // Evaluate comparison condition
                int temporary = *(numbers + index);                                           // Initialize variable
                *(numbers + index) = *(numbers + index + 1);                                  // Calculate and assign value
                *(numbers + index + 1) = temporary;                                           // Swap value using temporary variable
            }
        }
    }
    printf("Ascending:");                                                                     // Display ascending
    for (int index = 0; index < ARRAY_SIZE; index++) printf(" %d", *(numbers + index));       // Display output result
    printf("\nDescending:");                                                                  // Display output result
    for (int index = ARRAY_SIZE - 1; index >= 0; index--) printf(" %d", *(numbers + index));  // Display output result
    printf("\n");                                                                             // Display output result
    return 0;                                                                                 // Exit program successfully
}
