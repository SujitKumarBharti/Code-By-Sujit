#include <iostream>
using namespace std;

int main() {
    double base;                                                  // Declare variables for calculation
    int exp;                                                      // Declare variables for calculation
    cout << "Enter base and integer exponent: ";                  // Prompt user for input
    if (cin >> base >> exp) {                                     // Read input from user
        double result = 1.0;                                      // Initialize variable
        int e = abs(exp);                                         // Initialize variable
        for (int i = 0; i < e; i++) result *= base;               // Iterate through loop
        if (exp < 0) result = 1.0 / result;                       // Check condition
        cout << base << " ^ " << exp << " = " << result << endl;  // Display calculate power without using pow() result
    }
    return 0;                                                     // Exit program successfully
}
