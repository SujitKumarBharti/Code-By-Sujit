#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size();                      // Initialize variable
    for (int i = 1; i < n; i++) {            // Iterate through loop
        int key = arr[i];                    // Initialize variable
        int j = i - 1;                       // Initialize variable
        while (j >= 0 && arr[j] > key) {     // Iterate through loop
            arr[j + 1] = arr[j];             // Perform calculation
            j--;
        }
        arr[j + 1] = key;                    // Perform calculation
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};    // Perform calculation
    cout << "Original: ";                    // Display implement Insertion Sort result
    for (int x : arr) cout << x << " ";      // Display implement Insertion Sort result
    cout << endl;                            // Display implement Insertion Sort result

    insertionSort(arr);

    cout << "Insertion Sorted: ";            // Display implement Insertion Sort result
    for (int x : arr) cout << x << " ";      // Display implement Insertion Sort result
    cout << endl;                            // Display implement Insertion Sort result
    return 0;                                // Exit program successfully
}
