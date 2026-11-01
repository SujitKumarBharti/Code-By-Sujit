#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count;
    long long sum = 0;                                                        // Initialize variable

    printf("Enter number of values: ");                                       // Prompt user to enter number of values
    if (scanf("%zu", &count) != 1 || count == 0 || count > 100000) return 1;  // Read user input values
    int *values = malloc(count * sizeof(*values));                            // Dynamically allocate memory
    if (values == NULL) {                                                     // Check pointer validity
        printf("Memory allocation failed.\n");                                // Display memory allocation failed.\n
        return 1;                                                             // Exit with error status code
    }

    for (size_t index = 0; index < count; index++) {                          // Loop through elements
        if (scanf("%d", &values[index]) != 1) {                               // Read user input values
            free(values);                                                     // Deallocate allocated memory
            return 1;                                                         // Exit with error status code
        }
        sum += values[index];                                                 // Accumulate updated value
    }
    printf("Sum: %lld\n", sum);                                               // Display sum
    free(values);                                                             // Deallocate allocated memory
    return 0;                                                                 // Exit program successfully
}
