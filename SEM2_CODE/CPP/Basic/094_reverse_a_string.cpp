#include <iostream>
using namespace std;

int main() {
    string str = "Antigravity";                               // Perform calculation
    cout << "Original: " << str << endl;                      // Display reverse a string result
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {  // Iterate through loop
        swap(str[i], str[j]);
    }
    cout << "Reversed: " << str << endl;                      // Display reverse a string result
    return 0;                                                 // Exit program successfully
}
