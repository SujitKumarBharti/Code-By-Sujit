#include <stdio.h>

int main(void) {
    int n, sum = 0;                                            // Initialize variable
    printf("Enter N: ");                                       // Prompt user for input
    if (scanf("%d", &n) == 1) {                                // Read input from user
        for (int i = 2; i <= n; i += 2) sum += i;              // Iterate through loop
        printf("Sum of even numbers up to %d: %d\n", n, sum);  // Display find the sum of even numbers fro... result
    }
    return 0;                                                  // Exit program successfully
}
