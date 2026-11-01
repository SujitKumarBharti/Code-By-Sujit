#include <iostream>
using namespace std;

int main() {
    long long n;                                     // Declare variables for calculation
    cout << "Enter an integer: ";                    // Prompt user for input
    if (cin >> n) {                                  // Read input from user
        long long temp = n, rev = 0;                 // Initialize variable
        while (temp != 0) {                          // Iterate through loop
            rev = rev * 10 + (temp % 10);            // Perform calculation
            temp /= 10;                              // Perform calculation
        }
        cout << "Reversed number: " << rev << endl;  // Display reverse a number result
    }
    return 0;                                        // Exit program successfully
}
