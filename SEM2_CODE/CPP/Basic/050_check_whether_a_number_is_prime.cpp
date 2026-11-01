#include <iostream>
using namespace std;

int main() {
    int n;                                                        // Declare variables for calculation
    cout << "Enter an integer: ";                                 // Prompt user for input
    if (cin >> n) {                                               // Read input from user
        bool isPrime = true;                                      // Initialize variable
        if (n <= 1) isPrime = false;                              // Check condition
        else {
            for (int i = 2; i * i <= n; i++) {                    // Iterate through loop
                if (n % i == 0) {                                 // Check condition
                    isPrime = false;                              // Perform calculation
                    break;
                }
            }
        }
        if (isPrime) cout << n << " is a Prime number." << endl;  // Display check whether a number is prime result
        else cout << n << " is NOT a Prime number." << endl;      // Display check whether a number is prime result
    }
    return 0;                                                     // Exit program successfully
}
