#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time, amount, ci;                   // Declare variables for calculation
    printf("Enter Principal, Rate (%%), and Time (years): ");   // Prompt user for input
    if (scanf("%lf %lf %lf", &principal, &rate, &time) == 3) {  // Read input from user
        amount = principal * pow((1 + rate / 100.0), time);     // Perform calculation
        ci = amount - principal;                                // Perform calculation
        printf("Compound Interest: %.2f\n", ci);                // Display calculate compound interest result
        printf("Total Amount: %.2f\n", amount);                 // Display calculate compound interest result
    }
    return 0;                                                   // Exit program successfully
}
