#include <iostream>
using namespace std;

int main() {
    int a, b;                                                           // Declare variables for calculation
    cout << "Enter two numbers (a and b): ";                            // Prompt user for input
    if (cin >> a >> b) {                                                // Read input from user
        cout << "Before swapping: a = " << a << ", b = " << b << endl;  // Display swap two numbers without using a... result
        a = a + b;                                                      // Perform calculation
        b = a - b;                                                      // Perform calculation
        a = a - b;                                                      // Perform calculation
        cout << "After swapping : a = " << a << ", b = " << b << endl;  // Display swap two numbers without using a... result
    }
    return 0;                                                           // Exit program successfully
}
