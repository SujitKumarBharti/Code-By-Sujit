#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int values[MAX_SIZE];                                              // Declare variable
    int unique[MAX_SIZE];                                              // Declare variable
    int count;                                                         // Declare variable
    int unique_count = 0;                                              // Initialize variable
    long long sum = 0;                                                 // Initialize variable

    printf("Enter number of elements (1-%d): ", MAX_SIZE);             // Prompt user to enter number of elements (1-%d)
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE) {   // Read user input values
        printf("Invalid number of elements.\n");                       // Display error message
        return 1;                                                      // Exit with error status code
    }

    printf("Enter %d integers: ", count);                              // Prompt user to enter %d integers
    for (int index = 0; index < count; index++) {                      // Loop through elements
        if (scanf("%d", &values[index]) != 1) {                        // Read each array value
            return 1;                                                  // Exit with error status code
        }
        sum += values[index];                                          // Accumulate updated value
    }

    int minimum = values[0];                                           // Initialize variable
    int maximum = values[0];                                           // Initialize variable
    printf("Even values:");                                            // Display even values
    for (int index = 0; index < count; index++) {                      // Loop through elements
        if (values[index] % 2 == 0) {                                  // Check if value equals zero
            printf(" %d", values[index]);                              // Display output result
        }
    }
    printf("\nOdd values:");                                           // Display output result
    for (int index = 0; index < count; index++) {                      // Loop through elements
        if (values[index] % 2 != 0) {                                  // Check condition
            printf(" %d", values[index]);                              // Display output result
        }
        if (values[index] < minimum) minimum = values[index];          // Evaluate comparison condition
        if (values[index] > maximum) maximum = values[index];          // Evaluate comparison condition

        int found = 0;                                                 // Initialize variable
        for (int check = 0; check < unique_count; check++) {           // Loop through elements
            if (unique[check] == values[index]) {                      // Check condition
                found = 1;                                             // Calculate and assign value
                break;                                                 // Exit loop or switch block
            }
        }
        if (!found) unique[unique_count++] = values[index];            // Check condition
    }

    printf("\nSum: %lld\nAverage: %.2f\n", sum, (double)sum / count);  // Display output result
    printf("Minimum: %d\nMaximum: %d\n", minimum, maximum);            // Display minimum
    printf("Reverse:");                                                // Display reverse
    for (int index = count - 1; index >= 0; index--) {                 // Loop through elements
        printf(" %d", values[index]);                                  // Display output result
    }
    printf("\nWithout duplicates:");                                   // Display output result
    for (int index = 0; index < unique_count; index++) {               // Loop through elements
        printf(" %d", unique[index]);                                  // Display output result
    }
    printf("\n");                                                      // Display output result
    return 0;                                                          // Exit program successfully
}
