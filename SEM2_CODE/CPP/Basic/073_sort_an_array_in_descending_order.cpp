#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                          // Declare variables for calculation
    cout << "Enter number of elements: ";           // Prompt user for input
    if (cin >> n && n > 0) {                        // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";     // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];  // Read input from user
        for (int i = 0; i < n - 1; i++) {           // Iterate through loop
            for (int j = 0; j < n - i - 1; j++) {   // Iterate through loop
                if (arr[j] < arr[j + 1]) {          // Check condition
                    int t = arr[j];                 // Initialize variable
                    arr[j] = arr[j + 1];            // Perform calculation
                    arr[j + 1] = t;                 // Perform calculation
                }
            }
        }
        cout << "Descending order: ";               // Display sort an array in descending order result
        for (int x : arr) cout << x << " ";         // Display sort an array in descending order result
        cout << endl;                               // Display sort an array in descending order result
    }
    return 0;                                       // Exit program successfully
}
