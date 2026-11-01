#include <stdio.h>

int main(void) {
    int terms;                                          // Declare variable
    double sum = 0.0;                                   // Initialize variable

    printf("Enter number of terms: ");                  // Prompt user to enter number of terms
    if (scanf("%d", &terms) != 1 || terms < 1) {        // Require a positive count
        printf("Enter a positive number of terms.\n");  // Prompt user to enter a positive number of terms.\n
        return 1;                                       // Exit with error status code
    }

    for (int value = 1; value <= terms; value++) {      // Loop through elements
        sum += 1.0 / value;                             // Accumulate updated value
    }
    printf("Series sum: %.6f\n", sum);                  // Display series sum
    return 0;                                           // Exit program successfully
}
