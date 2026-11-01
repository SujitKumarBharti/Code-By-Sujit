#include <iostream>
using namespace std;

int main() {
    int n;                                                                    // Declare variables for calculation
    cout << "Enter N: ";                                                      // Prompt user for input
    if (cin >> n && n > 0) {                                                  // Read input from user
        long long sum = 0;                                                    // Initialize variable
        for (int i = 1; i <= n; i++) sum += i;                                // Iterate through loop
        cout << "Sum of first " << n << " natural numbers: " << sum << endl;  // Display find the sum of first N natural ... result
    }
    return 0;                                                                 // Exit program successfully
}
