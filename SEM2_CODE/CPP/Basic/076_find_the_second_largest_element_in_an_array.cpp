#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;                                                                             // Declare variables for calculation
    cout << "Enter number of elements: ";                                              // Prompt user for input
    if (cin >> n && n >= 2) {                                                          // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";                                        // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];                                     // Read input from user
        int first = INT_MIN, second = INT_MIN;                                         // Initialize variable
        for (int x : arr) {                                                            // Iterate through loop
            if (x > first) {                                                           // Check condition
                second = first;                                                        // Perform calculation
                first = x;                                                             // Perform calculation
            } else if (x > second && x != first) {                                     // Check condition
                second = x;                                                            // Perform calculation
            }
        }
        if (second == INT_MIN) cout << "No distinct second largest element." << endl;  // Display find the second-largest element ... result
        else cout << "Second largest element: " << second << endl;                     // Display find the second-largest element ... result
    }
    return 0;                                                                          // Exit program successfully
}
