#include <iostream>
using namespace std;

int main() {
    double a, b, c;                          // Declare variables for calculation
    cout << "Enter three numbers: ";         // Prompt user for input
    if (cin >> a >> b >> c) {                // Read input from user
        double avg = (a + b + c) / 3.0;      // Initialize variable
        cout << "Average: " << avg << endl;  // Display calculate the average of three n... result
    }
    return 0;                                // Exit program successfully
}
