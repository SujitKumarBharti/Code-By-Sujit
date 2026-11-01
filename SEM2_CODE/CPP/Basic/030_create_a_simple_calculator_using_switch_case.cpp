#include <iostream>
using namespace std;

int main() {
    char op;                                                                           // Declare variables for calculation
    double a, b;                                                                       // Declare variables for calculation
    cout << "Enter operator (+, -, *, /): ";                                           // Prompt user for input
    if (cin >> op) {                                                                   // Read input from user
        cout << "Enter two operands: ";                                                // Prompt user for input
        if (cin >> a >> b) {                                                           // Read input from user
            switch (op) {
                case '+': cout << a << " + " << b << " = " << (a + b) << endl; break;  // Display create a simple calculator using... result
                case '-': cout << a << " - " << b << " = " << (a - b) << endl; break;  // Display create a simple calculator using... result
                case '*': cout << a << " * " << b << " = " << (a * b) << endl; break;  // Display create a simple calculator using... result
                case '/':
                    if (b != 0) cout << a << " / " << b << " = " << (a / b) << endl;   // Display create a simple calculator using... result
                    else cout << "Error: Division by zero!" << endl;                   // Display error message for invalid input
                    break;
                default: cout << "Error: Invalid operator!" << endl; break;            // Display error message for invalid input
            }
        }
    }
    return 0;                                                                          // Exit program successfully
}
