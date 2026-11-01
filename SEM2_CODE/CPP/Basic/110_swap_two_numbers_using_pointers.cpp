#include <iostream>
using namespace std;

void swapValues(int *a, int *b) {
    int temp = *a;                                              // Initialize variable
    *a = *b;                                                    // Perform calculation
    *b = temp;                                                  // Perform calculation
}

int main() {
    int p = 50, q = 90;                                         // Initialize variable
    cout << "Before swap: p = " << p << ", q = " << q << endl;  // Display swap two numbers using pointers result
    swapValues(&p, &q);
    cout << "After swap : p = " << p << ", q = " << q << endl;  // Display swap two numbers using pointers result
    return 0;                                                   // Exit program successfully
}
