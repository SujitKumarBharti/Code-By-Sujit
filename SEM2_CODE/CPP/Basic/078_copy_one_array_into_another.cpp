#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                       // Declare variables for calculation
    cout << "Enter number of elements: ";        // Prompt user for input
    if (cin >> n && n > 0) {                     // Read input from user
        vector<int> src(n);
        vector<int> dest(n);
        cout << "Enter " << n << " elements: ";  // Prompt user for input
        for (int i = 0; i < n; i++) {            // Iterate through loop
            cin >> src[i];                       // Read input from user
            dest[i] = src[i];                    // Perform calculation
        }
        cout << "Destination array: ";           // Display copy one array into another result
        for (int x : dest) cout << x << " ";     // Display copy one array into another result
        cout << endl;                            // Display copy one array into another result
    }
    return 0;                                    // Exit program successfully
}
