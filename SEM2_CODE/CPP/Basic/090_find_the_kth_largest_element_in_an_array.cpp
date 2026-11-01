#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {12, 3, 5, 7, 19, 26, 4};                                   // Perform calculation
    int k = 3;                                                                    // Initialize variable

    sort(arr.rbegin(), arr.rend());                                               // Sort in descending order

    if (k > 0 && k <= (int)arr.size()) {                                          // Check condition
        cout << "The " << k << "-th largest element is: " << arr[k - 1] << endl;  // Display find the Kth largest element in ... result
    } else {
        cout << "Invalid K value." << endl;                                       // Display error message for invalid input
    }
    return 0;                                                                     // Exit program successfully
}
