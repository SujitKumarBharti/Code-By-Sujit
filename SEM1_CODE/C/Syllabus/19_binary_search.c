#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];                                                     // Declare variable
    int count;                                                                // Declare variable
    int target;                                                               // Declare variable
    int low = 0;                                                              // Initialize variable
    int high;                                                                 // Declare variable

    printf("Enter sorted array size: ");                                      // Prompt user to enter sorted array size
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE) return 1;  // Read user input values
    printf("Enter sorted values: ");                                          // Prompt user to enter sorted values
    for (int index = 0; index < count; index++)                               // Loop through elements
        if (scanf("%d", &values[index]) != 1) return 1;                       // Read user input values
    printf("Enter value to find: ");                                          // Prompt user to enter value to find
    if (scanf("%d", &target) != 1) return 1;                                  // Read user input values
    high = count - 1;                                                         // Calculate and assign value

    while (low <= high) {                                                     // Iterate while condition holds
        int middle = low + (high - low) / 2;                                  // Initialize variable
        if (values[middle] == target) {                                       // Check condition
            printf("Found at position %d.\n", middle + 1);                    // Display found at position
            return 0;                                                         // Exit program successfully
        }
        if (values[middle] < target) low = middle + 1;                        // Evaluate comparison condition
        else high = middle - 1;                                               // Calculate and assign value
    }
    printf("Value not found.\n");                                             // Display value not found.\n
    return 0;                                                                 // Exit program successfully
}
