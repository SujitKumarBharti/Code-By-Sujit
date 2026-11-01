#include <iostream>
using namespace std;

int main() {
    long long n;                                                     // Declare variables for calculation
    cout << "Enter an integer: ";                                    // Prompt user for input
    if (cin >> n) {                                                  // Read input from user
        if (n < 0) {                                                 // Check condition
            cout << n << " is NOT a palindrome." << endl;            // Display check whether a number is palind... result
        } else {
            long long temp = n, rev = 0;                             // Initialize variable
            while (temp > 0) {                                       // Iterate through loop
                rev = rev * 10 + (temp % 10);                        // Perform calculation
                temp /= 10;                                          // Perform calculation
            }
            if (rev == n) cout << n << " is a Palindrome." << endl;  // Display check whether a number is palind... result
            else cout << n << " is NOT a Palindrome." << endl;       // Display check whether a number is palind... result
        }
    }
    return 0;                                                        // Exit program successfully
}
