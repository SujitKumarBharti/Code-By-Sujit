#include <iostream>
using namespace std;

int main() {
    int n;                                   // Declare variables for calculation
    cout << "Enter number of terms: ";       // Prompt user for input
    if (cin >> n && n > 0) {                 // Read input from user
        long long a = 0, b = 1;              // Initialize variable
        cout << "Fibonacci series: ";        // Display generate the Fibonacci series result
        for (int i = 1; i <= n; i++) {       // Iterate through loop
            cout << a << " ";                // Display generate the Fibonacci series result
            long long next = a + b;          // Initialize variable
            a = b;                           // Perform calculation
            b = next;                        // Perform calculation
        }
        cout << endl;                        // Display generate the Fibonacci series result
    }
    return 0;                                // Exit program successfully
}
