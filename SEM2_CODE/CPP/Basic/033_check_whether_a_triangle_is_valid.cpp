#include <iostream>
using namespace std;

int main() {
    double a, b, c;                                           // Declare variables for calculation
    cout << "Enter three angles of triangle: ";               // Prompt user for input
    if (cin >> a >> b >> c) {                                 // Read input from user
        if (a > 0 && b > 0 && c > 0 && (a + b + c == 180.0))  // Check condition
            cout << "The triangle is VALID." << endl;         // Display check whether a triangle is valid result
        else
            cout << "The triangle is INVALID." << endl;       // Display error message for invalid input
    }
    return 0;                                                 // Exit program successfully
}
