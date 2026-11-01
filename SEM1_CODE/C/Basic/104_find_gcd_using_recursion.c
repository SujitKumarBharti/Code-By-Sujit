#include <stdio.h>

int gcd(int a, int b) {                                                    // Declare variables for calculation
    if (b == 0) return a;                                                  // Check condition
    return gcd(b, a % b);
}

int main(void) {
    int a = 48, b = 18;                                                    // Initialize variable
    printf("GCD of %d and %d using recursion is: %d\n", a, b, gcd(a, b));  // Display find GCD using recursion result
    return 0;                                                              // Exit program successfully
}
