#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};                                 // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                             // Initialize variable
    int *ptr = arr;                                                   // Initialize variable
    int sum = 0;                                                      // Initialize variable

    for (int i = 0; i < n; i++) {                                     // Iterate through loop
        sum += *(ptr + i);                                            // Perform calculation
    }

    cout << "Sum of array elements using pointers: " << sum << endl;  // Display find the sum of array elements u... result
    return 0;                                                         // Exit program successfully
}
