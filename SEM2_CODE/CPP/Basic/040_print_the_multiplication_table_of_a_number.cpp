#include <iostream>
using namespace std;

int main() {
    int n;                                                        // Declare variables for calculation
    cout << "Enter a number: ";                                   // Prompt user for input
    if (cin >> n) {                                               // Read input from user
        for (int i = 1; i <= 10; i++) {                           // Iterate through loop
            cout << n << " x " << i << " = " << (n * i) << endl;  // Display print the multiplication table o... result
        }
    }
    return 0;                                                     // Exit program successfully
}
