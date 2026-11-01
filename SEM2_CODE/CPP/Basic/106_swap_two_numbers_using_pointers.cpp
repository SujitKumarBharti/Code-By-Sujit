#include <iostream>
using namespace std;

void swapPointers(int *a, int *b) {
    int temp = *a;                                              // Initialize variable
    *a = *b;                                                    // Perform calculation
    *b = temp;                                                  // Perform calculation
}

int main() {
    int x = 15, y = 85;                                         // Initialize variable
    cout << "Before swap: x = " << x << ", y = " << y << endl;  // Display swap two numbers using pointers result
    swapPointers(&x, &y);
    cout << "After swap : x = " << x << ", y = " << y << endl;  // Display swap two numbers using pointers result
    return 0;                                                   // Exit program successfully
}
