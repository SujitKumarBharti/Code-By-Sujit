#include <stdio.h>

int main(void) {
    float principal, rate, time, si;                           // Declare variables for calculation
    printf("Enter Principal, Rate (%%), and Time (years): ");  // Prompt user for input
    if (scanf("%f %f %f", &principal, &rate, &time) == 3) {    // Read input from user
        si = (principal * rate * time) / 100.0f;               // Perform calculation
        printf("Simple Interest: %.2f\n", si);                 // Display calculate simple interest result
    }
    return 0;                                                  // Exit program successfully
}
