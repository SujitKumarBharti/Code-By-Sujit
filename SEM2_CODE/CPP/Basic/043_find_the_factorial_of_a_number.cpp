#include <iostream>
using namespace std;

int main() {
    int n;                                                                  // Declare variables for calculation
    cout << "Enter a non-negative integer: ";                               // Prompt user for input
    if (cin >> n) {                                                         // Read input from user
        if (n < 0) {                                                        // Check condition
            cout << "Factorial not defined for negative numbers." << endl;  // Display find the factorial of a number result
        } else {
            unsigned long long fact = 1;                                    // Perform calculation
            for (int i = 1; i <= n; i++) fact *= i;                         // Iterate through loop
            cout << "Factorial of " << n << " = " << fact << endl;          // Display find the factorial of a number result
        }
    }
    return 0;                                                               // Exit program successfully
}
