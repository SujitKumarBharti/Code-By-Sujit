#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, r, t;                                           // Declare variables for calculation
    cout << "Enter Principal, Rate (%), and Time (years): ";  // Prompt user for input
    if (cin >> p >> r >> t) {                                 // Read input from user
        double amount = p * pow((1.0 + r / 100.0), t);        // Initialize variable
        double ci = amount - p;                               // Initialize variable
        cout << "Compound Interest: " << ci << endl;          // Display calculate compound interest result
        cout << "Total Amount     : " << amount << endl;      // Display calculate compound interest result
    }
    return 0;                                                 // Exit program successfully
}
