#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                                                     // Declare variables for calculation
    cout << "Enter number of elements: ";                                                      // Prompt user for input
    if (cin >> n && n > 0) {                                                                   // Read input from user
        vector<int> arr(n);
        cout << "Enter " << n << " elements: ";                                                // Prompt user for input
        for (int i = 0; i < n; i++) cin >> arr[i];                                             // Read input from user
        int key;                                                                               // Declare variables for calculation
        cout << "Enter key to search: ";                                                       // Prompt user for input
        if (cin >> key) {                                                                      // Read input from user
            int pos = -1;                                                                      // Initialize variable
            for (int i = 0; i < n; i++) {                                                      // Iterate through loop
                if (arr[i] == key) {                                                           // Check condition
                    pos = i;                                                                   // Perform calculation
                    break;
                }
            }
            if (pos != -1) cout << "Key " << key << " found at index " << pos << "." << endl;  // Display search an element using Linear S... result
            else cout << "Key " << key << " not found." << endl;                               // Display search an element using Linear S... result
        }
    }
    return 0;                                                                                  // Exit program successfully
}
