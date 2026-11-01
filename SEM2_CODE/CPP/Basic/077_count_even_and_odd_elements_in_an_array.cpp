#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                            // Declare variables for calculation
    cout << "Enter number of elements: ";             // Prompt user for input
    if (cin >> n && n > 0) {                          // Read input from user
        vector<int> arr(n);
        int evenCount = 0, oddCount = 0;              // Initialize variable
        cout << "Enter " << n << " elements: ";       // Prompt user for input
        for (int i = 0; i < n; i++) {                 // Iterate through loop
            cin >> arr[i];                            // Read input from user
            if (arr[i] % 2 == 0) evenCount++;         // Check condition
            else oddCount++;
        }
        cout << "Even count: " << evenCount << endl;  // Display count even and odd elements in a... result
        cout << "Odd count : " << oddCount << endl;   // Display count even and odd elements in a... result
    }
    return 0;                                         // Exit program successfully
}
