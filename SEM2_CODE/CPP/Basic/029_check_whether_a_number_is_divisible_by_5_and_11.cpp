#include <iostream>
using namespace std;

int main() {
    int n;                                                               // Declare variables for calculation
    cout << "Enter an integer: ";                                        // Prompt user for input
    if (cin >> n) {                                                      // Read input from user
        if (n % 5 == 0 && n % 11 == 0)                                   // Check condition
            cout << n << " is divisible by both 5 and 11." << endl;      // Display check whether a number is divisi... result
        else
            cout << n << " is NOT divisible by both 5 and 11." << endl;  // Display check whether a number is divisi... result
    }
    return 0;                                                            // Exit program successfully
}
