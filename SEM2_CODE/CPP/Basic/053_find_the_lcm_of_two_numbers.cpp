#include <iostream>
using namespace std;

int main() {
    int a, b;                                                              // Declare variables for calculation
    cout << "Enter two numbers: ";                                         // Prompt user for input
    if (cin >> a >> b) {                                                   // Read input from user
        int x = a, y = b;                                                  // Initialize variable
        while (y != 0) {                                                   // Iterate through loop
            int temp = y;                                                  // Initialize variable
            y = x % y;                                                     // Perform calculation
            x = temp;                                                      // Perform calculation
        }
        int gcd = abs(x);                                                  // Initialize variable
        int lcm = (gcd != 0) ? abs(a * b) / gcd : 0;                       // Initialize variable
        cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;  // Display find the LCM of two numbers result
    }
    return 0;                                                              // Exit program successfully
}
