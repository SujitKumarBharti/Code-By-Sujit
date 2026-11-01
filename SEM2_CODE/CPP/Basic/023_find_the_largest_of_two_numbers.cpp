#include <iostream>
using namespace std;

int main() {
    int a, b;                                                          // Declare variables for calculation
    cout << "Enter two numbers: ";                                     // Prompt user for input
    if (cin >> a >> b) {                                               // Read input from user
        if (a > b) cout << a << " is larger than " << b << endl;       // Display find the largest of two numbers result
        else if (b > a) cout << b << " is larger than " << a << endl;  // Display find the largest of two numbers result
        else cout << "Both numbers are equal (" << a << ")." << endl;  // Display find the largest of two numbers result
    }
    return 0;                                                          // Exit program successfully
}
