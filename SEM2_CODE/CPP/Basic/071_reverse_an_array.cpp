#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                             // Declare variables for calculation
    cout << "Enter number of elements: ";              // Prompt user for input
    if (cin >> n && n > 0) {                           // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";        // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];     // Read input from user
        for (int i = 0, j = n - 1; i < j; i++, j--) {  // Iterate through loop
            int temp = arr[i];                         // Initialize variable
            arr[i] = arr[j];                           // Perform calculation
            arr[j] = temp;                             // Perform calculation
        }
        cout << "Reversed array: ";                    // Display reverse an array result
        for (int x : arr) cout << x << " ";            // Display reverse an array result
        cout << endl;                                  // Display reverse an array result
    }
    return 0;                                          // Exit program successfully
}
