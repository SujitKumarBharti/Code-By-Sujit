#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();                              // Initialize variable
    for (int i = 0; i < n - 1; i++) {                // Iterate through loop
        int min_idx = i;                             // Initialize variable
        for (int j = i + 1; j < n; j++) {            // Iterate through loop
            if (arr[j] < arr[min_idx]) min_idx = j;  // Check condition
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    vector<int> arr = {29, 10, 14, 37, 13};          // Perform calculation
    cout << "Original: ";                            // Display implement Selection Sort result
    for (int x : arr) cout << x << " ";              // Display implement Selection Sort result
    cout << endl;                                    // Display implement Selection Sort result

    selectionSort(arr);

    cout << "Selection Sorted: ";                    // Display implement Selection Sort result
    for (int x : arr) cout << x << " ";              // Display implement Selection Sort result
    cout << endl;                                    // Display implement Selection Sort result
    return 0;                                        // Exit program successfully
}
