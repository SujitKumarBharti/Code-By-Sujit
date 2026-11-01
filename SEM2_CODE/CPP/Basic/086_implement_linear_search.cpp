#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int key) {                               // Declare variables for calculation
    for (size_t i = 0; i < arr.size(); i++) {                                     // Iterate through loop
        if (arr[i] == key) return i;                                              // Check condition
    }
    return -1;
}

int main() {
    vector<int> arr = {15, 23, 7, 42, 19, 8};                                     // Perform calculation
    int key = 42;                                                                 // Initialize variable
    int index = linearSearch(arr, key);                                           // Initialize variable
    if (index != -1)                                                              // Check condition
        cout << "Element " << key << " found at index " << index << "." << endl;  // Display implement Linear Search result
    else
        cout << "Element " << key << " not found." << endl;                       // Display implement Linear Search result
    return 0;                                                                     // Exit program successfully
}
