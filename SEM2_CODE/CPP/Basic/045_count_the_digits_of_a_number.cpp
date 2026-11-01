#include <iostream>
using namespace std;

int main() {
    long long n;                                                   // Declare variables for calculation
    cout << "Enter an integer: ";                                  // Prompt user for input
    if (cin >> n) {                                                // Read input from user
        long long temp = (n < 0) ? -n : n;                         // Initialize variable
        int count = (temp == 0) ? 1 : 0;                           // Initialize variable
        while (temp > 0) {                                         // Iterate through loop
            count++;
            temp /= 10;                                            // Perform calculation
        }
        cout << "Total digits in " << n << ": " << count << endl;  // Display count the digits of a number result
    }
    return 0;                                                      // Exit program successfully
}
