#include <iostream>
using namespace std;

int main() {
    int arr[] = {11, 22, 33, 44, 55};                                                        // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                                                    // Initialize variable
    int *ptr = arr;                                                                          // Initialize variable

    cout << "Array elements using pointer arithmetic:" << endl;                              // Display access array elements using poin... result
    for (int i = 0; i < n; i++) {                                                            // Iterate through loop
        cout << "Index " << i << ": " << *(ptr + i) << " at address " << (ptr + i) << endl;  // Display access array elements using poin... result
    }
    return 0;                                                                                // Exit program successfully
}
