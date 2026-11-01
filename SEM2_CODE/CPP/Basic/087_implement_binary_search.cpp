#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int key) {                               // Declare variables for calculation
    int low = 0, high = arr.size() - 1;                                           // Initialize variable
    while (low <= high) {                                                         // Iterate through loop
        int mid = low + (high - low) / 2;                                         // Initialize variable
        if (arr[mid] == key) return mid;                                          // Check condition
        if (arr[mid] < key) low = mid + 1;                                        // Check condition
        else high = mid - 1;                                                      // Perform calculation
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};                      // Perform calculation
    int key = 23;                                                                 // Initialize variable
    int index = binarySearch(arr, key);                                           // Initialize variable
    if (index != -1)                                                              // Check condition
        cout << "Element " << key << " found at index " << index << "." << endl;  // Display implement Binary Search result
    else
        cout << "Element " << key << " not found." << endl;                       // Display implement Binary Search result
    return 0;                                                                     // Exit program successfully
}
