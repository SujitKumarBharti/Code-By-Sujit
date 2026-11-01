#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high) {  // Declare variables for calculation
    int pivot = arr[high];                            // Initialize variable
    int i = low - 1;                                  // Initialize variable
    for (int j = low; j < high; j++) {                // Iterate through loop
        if (arr[j] < pivot) {                         // Check condition
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low < high) {                                 // Check condition
        int pi = partition(arr, low, high);           // Initialize variable
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};            // Perform calculation
    cout << "Original: ";                             // Display implement Quick Sort result
    for (int x : arr) cout << x << " ";               // Display implement Quick Sort result
    cout << endl;                                     // Display implement Quick Sort result

    quickSort(arr, 0, arr.size() - 1);

    cout << "Quick Sorted: ";                         // Display implement Quick Sort result
    for (int x : arr) cout << x << " ";               // Display implement Quick Sort result
    cout << endl;                                     // Display implement Quick Sort result
    return 0;                                         // Exit program successfully
}
