#include <iostream>
using namespace std;

int main() {
    long long n;                                   // Declare variables for calculation
    cout << "Enter an integer: ";                  // Prompt user for input
    if (cin >> n) {                                // Read input from user
        long long temp = (n < 0) ? -n : n;         // Initialize variable
        long long sum = 0;                         // Initialize variable
        while (temp > 0) {                         // Iterate through loop
            sum += (temp % 10);                    // Perform calculation
            temp /= 10;                            // Perform calculation
        }
        cout << "Sum of digits: " << sum << endl;  // Display find the sum of digits of a number result
    }
    return 0;                                      // Exit program successfully
}
