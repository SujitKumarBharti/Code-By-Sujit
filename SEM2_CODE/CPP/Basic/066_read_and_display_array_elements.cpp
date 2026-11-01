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
        cout << "Array elements: ";                 // Display read and display array elements result
        for (int x : arr) cout << x << " ";         // Display read and display array elements result
        cout << endl;                               // Display read and display array elements result
    }
    return 0;                                       // Exit program successfully
}
