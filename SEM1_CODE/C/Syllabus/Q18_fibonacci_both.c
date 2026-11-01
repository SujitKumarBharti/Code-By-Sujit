#include <stdio.h>

long long fibonacci_recursive(int term) {
    if (term < 2) return term;                                                            // Evaluate comparison condition
    return fibonacci_recursive(term - 1) + fibonacci_recursive(term - 2);                 // Return computed result
}

int main(void) {
    int terms;                                                                            // Declare variable
    long long previous = 0;                                                               // Initialize variable
    long long current = 1;                                                                // Initialize variable

    printf("Enter number of terms (1-40): ");                                             // Prompt user to enter number of terms (1-40)
    if (scanf("%d", &terms) != 1 || terms < 1 || terms > 40) return 1;                    // Read user input values
    printf("Recursive: ");                                                                // Display recursive
    for (int term = 0; term < terms; term++) printf("%lld ", fibonacci_recursive(term));  // Display , fibonacci_recursive(term));
    printf("\nIterative: ");                                                              // Display output result
    for (int term = 0; term < terms; term++) {                                            // Loop through elements
        printf("%lld ", previous);                                                        // Display , previous);
        long long next = previous + current;                                              // Initialize variable
        previous = current;                                                               // Calculate and assign value
        current = next;                                                                   // Calculate and assign value
    }
    printf("\n");                                                                         // Display output result
    return 0;                                                                             // Exit program successfully
}
