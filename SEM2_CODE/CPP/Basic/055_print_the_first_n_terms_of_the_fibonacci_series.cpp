#include <iostream>
using namespace std;

int main() {
    int n;                                                 // Declare variables for calculation
    cout << "Enter N: ";                                   // Prompt user for input
    if (cin >> n && n > 0) {                               // Read input from user
        long long a = 0, b = 1;                            // Initialize variable
        cout << "First " << n << " terms of Fibonacci: ";  // Display print the first N terms of the F... result
        for (int i = 1; i <= n; i++) {                     // Iterate through loop
            cout << a << " ";                              // Display print the first N terms of the F... result
            long long next = a + b;                        // Initialize variable
            a = b;                                         // Perform calculation
            b = next;                                      // Perform calculation
        }
        cout << endl;                                      // Display print the first N terms of the F... result
    }
    return 0;                                              // Exit program successfully
}
