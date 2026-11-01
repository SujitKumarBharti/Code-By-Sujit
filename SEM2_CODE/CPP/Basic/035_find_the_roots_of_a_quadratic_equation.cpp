#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;                                                                 // Declare variables for calculation
    cout << "Enter coefficients a, b, c (ax^2 + bx + c = 0): ";                     // Prompt user for input
    if (cin >> a >> b >> c) {                                                       // Read input from user
        if (a == 0) {                                                               // Check condition
            cout << "Not a quadratic equation (a cannot be zero)." << endl;         // Display find the roots of a quadratic eq... result
            return 0;                                                               // Exit program successfully
        }
        double disc = b * b - 4 * a * c;                                            // Initialize variable
        if (disc > 0) {                                                             // Check condition
            double r1 = (-b + sqrt(disc)) / (2 * a);                                // Initialize variable
            double r2 = (-b - sqrt(disc)) / (2 * a);                                // Initialize variable
            cout << "Real and distinct roots: " << r1 << " and " << r2 << endl;     // Display find the roots of a quadratic eq... result
        } else if (disc == 0) {                                                     // Check condition
            double r = -b / (2 * a);                                                // Initialize variable
            cout << "Real and equal root: " << r << endl;                           // Display find the roots of a quadratic eq... result
        } else {
            double realPart = -b / (2 * a);                                         // Initialize variable
            double imagPart = sqrt(-disc) / (2 * a);                                // Initialize variable
            cout << "Complex roots: " << realPart << " + " << imagPart << "i and "  // Display find the roots of a quadratic eq... result
                 << realPart << " - " << imagPart << "i" << endl;
        }
    }
    return 0;                                                                       // Exit program successfully
}
