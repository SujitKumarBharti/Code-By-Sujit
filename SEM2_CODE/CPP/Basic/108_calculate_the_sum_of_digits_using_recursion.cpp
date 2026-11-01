#include <iostream>
using namespace std;

int sumOfDigits(int n) {                                                                 // Declare variables for calculation
    if (n == 0) return 0;                                                                // Check condition
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n = 9876;                                                                        // Initialize variable
    cout << "Sum of digits of " << n << " using recursion: " << sumOfDigits(n) << endl;  // Display calculate the sum of digits usin... result
    return 0;                                                                            // Exit program successfully
}
