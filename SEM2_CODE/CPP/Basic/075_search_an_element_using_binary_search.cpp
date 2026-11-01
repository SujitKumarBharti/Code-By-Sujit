#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                                                     // Declare variables for calculation
    cout << "Enter number of elements (sorted): ";                                             // Prompt user for input
    if (cin >> n && n > 0) {                                                                   // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " sorted elements: ";                                         // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];                                             // Read input from user
        int key;                                                                               // Declare variables for calculation
        cout << "Enter key to search: ";                                                       // Prompt user for input
        if (cin >> key) {                                                                      // Read input from user
            int low = 0, high = n - 1, pos = -1;                                               // Initialize variable
            while (low <= high) {                                                              // Iterate through loop
                int mid = low + (high - low) / 2;                                              // Initialize variable
                if (arr[mid] == key) {                                                         // Check condition
                    pos = mid;                                                                 // Perform calculation
                    break;
                } else if (arr[mid] < key) low = mid + 1;                                      // Check condition
                else high = mid - 1;                                                           // Perform calculation
            }
            if (pos != -1) cout << "Key " << key << " found at index " << pos << "." << endl;  // Display search an element using Binary S... result
            else cout << "Key " << key << " not found." << endl;                               // Display search an element using Binary S... result
        }
    }
    return 0;                                                                                  // Exit program successfully
}
