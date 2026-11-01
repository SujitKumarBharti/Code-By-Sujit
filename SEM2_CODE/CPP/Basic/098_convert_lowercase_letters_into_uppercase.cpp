#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "hello modern c++ world";         // Perform calculation
    cout << "Before: " << str << endl;             // Display convert lowercase letters into u... result
    for (char &c : str) {                          // Iterate through loop
        if (c >= 'a' && c <= 'z') c = toupper(c);  // Check condition
    }
    cout << "After : " << str << endl;             // Display convert lowercase letters into u... result
    return 0;                                      // Exit program successfully
}
