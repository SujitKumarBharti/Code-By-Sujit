#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];                                                      // Declare variable
    int count;                                                                 // Declare variable

    printf("Enter array size: ");                                              // Prompt user to enter array size
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE) return 1;   // Read user input values
    printf("Enter integers: ");                                                // Prompt user to enter integers
    for (int index = 0; index < count; index++)                                // Loop through elements
        if (scanf("%d", &values[index]) != 1) return 1;                        // Read user input values

    for (int end = count - 1; end > 0; end--) {                                // Loop through elements
        int changed = 0;                                                       // Initialize variable
        for (int index = 0; index < end; index++) {                            // Loop through elements
            if (values[index] > values[index + 1]) {                           // Evaluate comparison condition
                int temporary = values[index];                                 // Initialize variable
                values[index] = values[index + 1];                             // Calculate and assign value
                values[index + 1] = temporary;                                 // Swap value using temporary variable
                changed = 1;                                                   // Calculate and assign value
            }
        }
        if (!changed) break;                                                   // Check condition
    }
    printf("Sorted:");                                                         // Display sorted
    for (int index = 0; index < count; index++) printf(" %d", values[index]);  // Display output result
    printf("\n");                                                              // Display output result
    return 0;                                                                  // Exit program successfully
}
