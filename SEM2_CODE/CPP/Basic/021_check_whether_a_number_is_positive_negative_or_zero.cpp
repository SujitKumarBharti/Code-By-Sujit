#include <iostream>
using namespace std;

int main() {
    double num;                                                    // Declare variables for calculation
    cout << "Enter a number: ";                                    // Prompt user for input
    if (cin >> num) {                                              // Read input from user
        if (num > 0) cout << num << " is Positive." << endl;       // Display check whether a number is positi... result
        else if (num < 0) cout << num << " is Negative." << endl;  // Display check whether a number is positi... result
        else cout << "The number is Zero." << endl;                // Display check whether a number is positi... result
    }
    return 0;                                                      // Exit program successfully
}
