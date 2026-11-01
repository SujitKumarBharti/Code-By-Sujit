#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                 // Declare variables for calculation
    cout << "Enter number of elements: ";                  // Prompt user for input
    if (cin >> n && n > 0) {                               // Read input from user
        vector<int> arr(n);
        long long sum = 0;                                 // Initialize variable
        cout << "Enter " << n << " elements: ";            // Prompt user for input
        for (int i = 0; i < n; i++) {                      // Iterate through loop
            cin >> arr[i];                                 // Read input from user
            sum += arr[i];                                 // Perform calculation
        }
        cout << "Sum of array elements: " << sum << endl;  // Display find the sum of array elements result
    }
    return 0;                                              // Exit program successfully
}
