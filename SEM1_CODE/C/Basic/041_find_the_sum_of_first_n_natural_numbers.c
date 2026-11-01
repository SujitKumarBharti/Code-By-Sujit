#include <stdio.h>

int main(void) {
    int n, sum = 0;                                               // Initialize variable
    printf("Enter N: ");                                          // Prompt user for input
    if (scanf("%d", &n) == 1) {                                   // Read input from user
        for (int i = 1; i <= n; i++) sum += i;                    // Iterate through loop
        printf("Sum of first %d natural numbers: %d\n", n, sum);  // Display find the sum of first N natural ... result
    }
    return 0;                                                     // Exit program successfully
}
