#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();                              // Initialize variable
    for (int i = 0; i < n - 1; i++) {                // Iterate through loop
        for (int j = 0; j < n - i - 1; j++) {        // Iterate through loop
            if (arr[j] > arr[j + 1]) {               // Check condition
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};  // Perform calculation
    cout << "Original: ";                            // Display implement Bubble Sort result
    for (int x : arr) cout << x << " ";              // Display implement Bubble Sort result
    cout << endl;                                    // Display implement Bubble Sort result

    bubbleSort(arr);

    cout << "Bubble Sorted: ";                       // Display implement Bubble Sort result
    for (int x : arr) cout << x << " ";              // Display implement Bubble Sort result
    cout << endl;                                    // Display implement Bubble Sort result
    return 0;                                        // Exit program successfully
}
