#include <iostream>
using namespace std;

int main() {
    int n;                                                                     // Declare variables for calculation
    cout << "Enter N: ";                                                       // Prompt user for input
    if (cin >> n && n > 0) {                                                   // Read input from user
        long long sum = 0;                                                     // Initialize variable
        for (int i = 2; i <= n; i += 2) sum += i;                              // Iterate through loop
        cout << "Sum of even numbers from 1 to " << n << ": " << sum << endl;  // Display find the sum of even numbers fro... result
    }
    return 0;                                                                  // Exit program successfully
}
