#include <iostream>
using namespace std;

int main() {
    double c;                                                      // Declare variables for calculation
    cout << "Enter temperature in Celsius: ";                      // Prompt user for input
    if (cin >> c) {                                                // Read input from user
        double f = (c * 9.0 / 5.0) + 32.0;                         // Initialize variable
        cout << c << " Celsius = " << f << " Fahrenheit" << endl;  // Display convert Celsius into Fahrenheit result
    }
    return 0;                                                      // Exit program successfully
}
