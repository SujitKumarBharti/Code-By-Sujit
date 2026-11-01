#include <stdio.h>

int main(void) {
    float a, b, c, avg;                        // Declare variables for calculation
    printf("Enter three numbers: ");           // Prompt user for input
    if (scanf("%f %f %f", &a, &b, &c) == 3) {  // Read input from user
        avg = (a + b + c) / 3.0f;              // Perform calculation
        printf("Average: %.2f\n", avg);        // Display calculate the average of three n... result
    }
    return 0;                                  // Exit program successfully
}
