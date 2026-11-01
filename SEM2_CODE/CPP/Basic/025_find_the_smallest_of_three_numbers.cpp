#include <iostream>
using namespace std;

int main() {
    int a, b, c;                                          // Declare variables for calculation
    cout << "Enter three numbers: ";                      // Prompt user for input
    if (cin >> a >> b >> c) {                             // Read input from user
        int smallest = a;                                 // Initialize variable
        if (b < smallest) smallest = b;                   // Check condition
        if (c < smallest) smallest = c;                   // Check condition
        cout << "Smallest number: " << smallest << endl;  // Display find the smallest of three numbers result
    }
    return 0;                                             // Exit program successfully
}
