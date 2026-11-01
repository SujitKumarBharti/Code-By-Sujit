#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                              // Declare variables for calculation
    cout << "Enter number of elements: ";               // Prompt user for input
    if (cin >> n && n > 0) {                            // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";         // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];      // Read input from user
        int maxVal = arr[0];                            // Initialize variable
        for (int i = 1; i < n; i++) {                   // Iterate through loop
            if (arr[i] > maxVal) maxVal = arr[i];       // Check condition
        }
        cout << "Largest element: " << maxVal << endl;  // Display find the largest element in an a... result
    }
    return 0;                                           // Exit program successfully
}
