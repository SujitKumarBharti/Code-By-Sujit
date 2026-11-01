#include <stdio.h>

int main(void) {
    int terms;                                                // Declare variable
    long long sum = 0;                                        // Initialize variable

    printf("Enter number of terms: ");                        // Prompt user to enter number of terms
    if (scanf("%d", &terms) != 1 || terms < 1) {              // Require a positive count
        printf("Enter a positive number of terms.\n");        // Prompt user to enter a positive number of terms.\n
        return 1;                                             // Exit with error status code
    }

    for (int value = 1; value <= terms; value++) {            // Loop through elements
        sum += value == 2 ? -value : value;                   // Match the printed series: 1 - 2 + 3 + 4 + ...
    }
    printf("Series sum (1 - 2 + 3 + 4 + ...): %lld\n", sum);  // Display output result
    return 0;                                                 // Exit program successfully
}
