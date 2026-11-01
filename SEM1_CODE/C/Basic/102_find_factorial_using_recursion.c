#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) return 1;                                                // Check condition
    return n * factorial(n - 1);
}

int main(void) {
    int n = 5;                                                           // Initialize variable
    printf("Factorial of %d using recursion: %llu\n", n, factorial(n));  // Display find factorial using recursion result
    return 0;                                                            // Exit program successfully
}
