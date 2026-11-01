#include <stdio.h>

double power(double base, int exp) {                                              // Declare variables for calculation
    if (exp == 0) return 1.0;                                                     // Check condition
    if (exp < 0) return 1.0 / power(base, -exp);                                  // Check condition
    return base * power(base, exp - 1);
}

int main(void) {
    double base = 2.0;                                                            // Initialize variable
    int exp = 5;                                                                  // Initialize variable
    printf("%.2lf ^ %d using recursion = %.2lf\n", base, exp, power(base, exp));  // Display find power using recursion result
    return 0;                                                                     // Exit program successfully
}
