#include <iostream>
using namespace std;

int main() {
    int a, b;                                            // Declare variables for calculation
    cout << "Enter two integers: ";                      // Prompt user for input
    if (cin >> a >> b) {                                 // Read input from user
        if (b != 0) {                                    // Check condition
            cout << "Remainder: " << (a % b) << endl;    // Display find the remainder of two numbers result
        } else {
            cout << "Error: Division by zero." << endl;  // Display error message for invalid input
        }
    }
    return 0;                                            // Exit program successfully
}
