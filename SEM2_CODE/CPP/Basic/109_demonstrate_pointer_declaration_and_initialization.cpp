#include <iostream>
using namespace std;

int main() {
    int val = 100;                                     // Initialize variable
    int *ptr = &val;                                   // Initialize variable

    cout << "Value of val        : " << val << endl;   // Display demonstrate pointer declaration ... result
    cout << "Address of val      : " << &val << endl;  // Display demonstrate pointer declaration ... result
    cout << "Pointer ptr holds   : " << ptr << endl;   // Display demonstrate pointer declaration ... result
    cout << "Dereferenced (*ptr) : " << *ptr << endl;  // Display demonstrate pointer declaration ... result
    return 0;                                          // Exit program successfully
}
