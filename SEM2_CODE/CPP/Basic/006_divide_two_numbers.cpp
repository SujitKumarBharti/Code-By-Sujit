#include <iostream>
using namespace std;

int main() {
    double a, b;                                                      // Declare variables for calculation
    cout << "Enter dividend and divisor: ";                           // Prompt user for input
    if (cin >> a >> b) {                                              // Read input from user
        if (b != 0) {                                                 // Check condition
            cout << "Quotient: " << (a / b) << endl;                  // Display divide two numbers result
        } else {
            cout << "Error: Division by zero is undefined." << endl;  // Display error message for invalid input
        }
    }
    return 0;                                                         // Exit program successfully
}
