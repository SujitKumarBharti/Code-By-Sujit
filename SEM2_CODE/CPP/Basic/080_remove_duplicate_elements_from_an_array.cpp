#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                            // Declare variables for calculation
    cout << "Enter number of elements: ";             // Prompt user for input
    if (cin >> n && n > 0) {                          // Read input from user
        vector<int> arr(n), unique;
        cout << "Enter " << n << " elements: ";       // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];    // Read input from user

        for (int x : arr) {                           // Iterate through loop
            bool found = false;                       // Initialize variable
            for (int u : unique) {                    // Iterate through loop
                if (u == x) {                         // Check condition
                    found = true;                     // Perform calculation
                    break;
                }
            }
            if (!found) unique.push_back(x);          // Check condition
        }

        cout << "Array after removing duplicates: ";  // Display remove duplicate elements from a... result
        for (int x : unique) cout << x << " ";        // Display remove duplicate elements from a... result
        cout << endl;                                 // Display remove duplicate elements from a... result
    }
    return 0;                                         // Exit program successfully
}
