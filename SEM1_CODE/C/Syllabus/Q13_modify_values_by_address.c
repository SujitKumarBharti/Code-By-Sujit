#include <stdio.h>

void update_values(int *first, int *second) {
    int original_first = *first;                       // Initialize variable
    int original_second = *second;                     // Initialize variable

    *first = original_first + original_second;         // Calculate and assign value
    *second = original_first * original_second;        // Calculate and assign value
}

int main(void) {
    int first;                                         // Declare variable
    int second;                                        // Declare variable

    printf("Enter two integers: ");                    // Prompt user to enter two integers
    if (scanf("%d %d", &first, &second) != 2) {        // Read user input values
        printf("Invalid input.\n");                    // Display error message
        return 1;                                      // Exit with error status code
    }

    update_values(&first, &second);
    printf("Updated values: %d %d\n", first, second);  // Display updated values
    return 0;                                          // Exit program successfully
}
