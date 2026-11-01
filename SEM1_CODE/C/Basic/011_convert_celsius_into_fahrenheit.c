#include <stdio.h>

int main(void) {
    float c, f;                                            // Declare variables for calculation
    printf("Enter temperature in Celsius: ");              // Prompt user for input
    if (scanf("%f", &c) == 1) {                            // Read input from user
        f = (c * 9.0f / 5.0f) + 32.0f;                     // Perform calculation
        printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);  // Display convert Celsius into Fahrenheit result
    }
    return 0;                                              // Exit program successfully
}
