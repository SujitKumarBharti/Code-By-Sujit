#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
    vector<int> left(arr.begin() + l, arr.begin() + m + 1);
    vector<int> right(arr.begin() + m + 1, arr.begin() + r + 1);

    int i = 0, j = 0, k = l;                                 // Initialize variable
    while (i < (int)left.size() && j < (int)right.size()) {  // Iterate through loop
        if (left[i] <= right[j]) arr[k++] = left[i++];       // Check condition
        else arr[k++] = right[j++];                          // Perform calculation
    }
    while (i < (int)left.size()) arr[k++] = left[i++];       // Iterate through loop
    while (j < (int)right.size()) arr[k++] = right[j++];     // Iterate through loop
}

void mergeSort(vector<int> &arr, int l, int r) {
    if (l < r) {                                             // Check condition
        int m = l + (r - l) / 2;                             // Initialize variable
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};            // Perform calculation
    cout << "Original: ";                                    // Display implement Merge Sort result
    for (int x : arr) cout << x << " ";                      // Display implement Merge Sort result
    cout << endl;                                            // Display implement Merge Sort result

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Merge Sorted: ";                                // Display implement Merge Sort result
    for (int x : arr) cout << x << " ";                      // Display implement Merge Sort result
    cout << endl;                                            // Display implement Merge Sort result
    return 0;                                                // Exit program successfully
}
