#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];                                                     // Declare variable
    int count;                                                                // Declare variable
    int target;                                                               // Declare variable
    int linear_position = -1;                                                 // Initialize variable
    int low;                                                                  // Declare variable
    int high;                                                                 // Declare variable
    int binary_position = -1;                                                 // Initialize variable
    int sorted = 1;                                                           // Initialize variable

    printf("Enter array size: ");                                             // Prompt user to enter array size
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE) return 1;  // Read user input values
    printf("Enter sorted integers: ");                                        // Prompt user to enter sorted integers
    for (int index = 0; index < count; index++) {                             // Loop through elements
        if (scanf("%d", &values[index]) != 1) return 1;                       // Read user input values
        if (index > 0 && values[index] < values[index - 1]) sorted = 0;       // Evaluate comparison condition
    }
    printf("Enter value to find: ");                                          // Prompt user to enter value to find
    if (scanf("%d", &target) != 1) return 1;                                  // Read user input values
    for (int index = 0; index < count; index++) {                             // Loop through elements
        if (values[index] == target) {                                        // Check condition
            linear_position = index;                                          // Calculate and assign value
            break;                                                            // Exit loop or switch block
        }
    }
    printf("Linear search: ");                                                // Display linear search
    if (linear_position < 0) printf("not found\n");                           // Display not found\n
    else printf("position %d\n", linear_position + 1);                        // Display position

    if (!sorted) {                                                            // Check condition
        printf("Binary search requires sorted input.\n");                     // Display output result
        return 0;                                                             // Exit program successfully
    }
    low = 0;                                                                  // Calculate and assign value
    high = count - 1;                                                         // Calculate and assign value
    while (low <= high) {                                                     // Iterate while condition holds
        int middle = low + (high - low) / 2;                                  // Initialize variable
        if (values[middle] == target) {                                       // Check condition
            binary_position = middle;                                         // Calculate and assign value
            break;                                                            // Exit loop or switch block
        }
        if (values[middle] < target) low = middle + 1;                        // Evaluate comparison condition
        else high = middle - 1;                                               // Calculate and assign value
    }
    printf("Binary search: ");                                                // Display binary search
    if (binary_position < 0) printf("not found\n");                           // Display not found\n
    else printf("position %d\n", binary_position + 1);                        // Display position
    return 0;                                                                 // Exit program successfully
}
