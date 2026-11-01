#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;                                        // Declare variables for calculation
    cout << "Enter size of first array: ";             // Prompt user for input
    if (cin >> n1 && n1 > 0) {                         // Read input from user
        vector<int> a(n1);
        cout << "Enter " << n1 << " elements: ";       // Prompt user for input
        for (int i = 0; i < n1; i++) cin >> a[i];      // Read input from user

        cout << "Enter size of second array: ";        // Prompt user for input
        if (cin >> n2 && n2 > 0) {                     // Read input from user
            vector<int> b(n2);
            cout << "Enter " << n2 << " elements: ";   // Prompt user for input
            for (int i = 0; i < n2; i++) cin >> b[i];  // Read input from user

            vector<int> merged;
            for (int x : a) merged.push_back(x);       // Iterate through loop
            for (int x : b) merged.push_back(x);       // Iterate through loop

            cout << "Merged array: ";                  // Display merge two arrays result
            for (int x : merged) cout << x << " ";     // Display merge two arrays result
            cout << endl;                              // Display merge two arrays result
        }
    }
    return 0;                                          // Exit program successfully
}
