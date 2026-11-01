#include <iostream>
using namespace std;

int main() {
    int a, b, c;                                        // Declare variables for calculation
    cout << "Enter three numbers: ";                    // Prompt user for input
    if (cin >> a >> b >> c) {                           // Read input from user
        int largest = a;                                // Initialize variable
        if (b > largest) largest = b;                   // Check condition
        if (c > largest) largest = c;                   // Check condition
        cout << "Largest number: " << largest << endl;  // Display find the largest of three numbers result
    }
    return 0;                                           // Exit program successfully
}
