#include <iostream>
using namespace std;

int main() {
    int n;                                                 // Declare variables for calculation
    cout << "Enter an integer: ";                          // Prompt user for input
    if (cin >> n) {                                        // Read input from user
        if (n % 2 == 0) cout << n << " is Even." << endl;  // Display check whether a number is even o... result
        else cout << n << " is Odd." << endl;              // Display check whether a number is even o... result
    }
    return 0;                                              // Exit program successfully
}
