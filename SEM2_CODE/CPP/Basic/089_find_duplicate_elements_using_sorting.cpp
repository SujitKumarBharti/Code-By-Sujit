#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {4, 2, 7, 2, 8, 4, 3, 1};                      // Perform calculation
    sort(arr.begin(), arr.end());

    cout << "Duplicate elements: ";                                  // Display find duplicate elements using so... result
    bool found = false;                                              // Initialize variable
    for (size_t i = 0; i < arr.size() - 1; i++) {                    // Iterate through loop
        if (arr[i] == arr[i + 1]) {                                  // Check condition
            cout << arr[i] << " ";                                   // Display find duplicate elements using so... result
            found = true;                                            // Perform calculation
            while (i < arr.size() - 1 && arr[i] == arr[i + 1]) i++;  // Iterate through loop
        }
    }
    if (!found) cout << "None";                                      // Display find duplicate elements using so... result
    cout << endl;                                                    // Display find duplicate elements using so... result
    return 0;                                                        // Exit program successfully
}
