#include <iostream>
using namespace std;

int main() {
    double p, r, t;                                           // Declare variables for calculation
    cout << "Enter Principal, Rate (%), and Time (years): ";  // Prompt user for input
    if (cin >> p >> r >> t) {                                 // Read input from user
        double si = (p * r * t) / 100.0;                      // Initialize variable
        cout << "Simple Interest: " << si << endl;            // Display calculate simple interest result
    }
    return 0;                                                 // Exit program successfully
}
