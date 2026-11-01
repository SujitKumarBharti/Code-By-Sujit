#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;                                                        // Declare variables for calculation
    cout << "Enter an integer: ";                                 // Prompt user for input
    if (cin >> n && n >= 0) {                                     // Read input from user
        int temp = n, digits = 0;                                 // Initialize variable
        while (temp > 0) {                                        // Iterate through loop
            digits++;
            temp /= 10;                                           // Perform calculation
        }
        temp = n;                                                 // Perform calculation
        double sum = 0;                                           // Initialize variable
        while (temp > 0) {                                        // Iterate through loop
            int rem = temp % 10;                                  // Initialize variable
            sum += pow(rem, digits);                              // Perform calculation
            temp /= 10;                                           // Perform calculation
        }
        if (int(round(sum)) == n)                                 // Check condition
            cout << n << " is an Armstrong number." << endl;      // Display check whether a number is Armstrong result
        else
            cout << n << " is NOT an Armstrong number." << endl;  // Display check whether a number is Armstrong result
    }
    return 0;                                                     // Exit program successfully
}
