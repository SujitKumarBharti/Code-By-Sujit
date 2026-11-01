#include <stdio.h>

int fibonacci(int n) {                                   // Declare variables for calculation
    if (n <= 0) return 0;                                // Check condition
    if (n == 1) return 1;                                // Check condition
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int terms = 10;                                      // Initialize variable
    printf("Fibonacci series up to %d terms: ", terms);  // Display generate Fibonacci series using ... result
    for (int i = 0; i < terms; i++) {                    // Iterate through loop
        printf("%d ", fibonacci(i));                     // Display generate Fibonacci series using ... result
    }
    printf("\n");                                        // Display generate Fibonacci series using ... result
    return 0;                                            // Exit program successfully
}
