#include <iostream>
using namespace std;

int main() {
    string str = "C + +   P r o g r a m";         // Perform calculation
    string res = "";                              // Perform calculation
    for (char c : str) {                          // Iterate through loop
        if (c != ' ') res += c;                   // Check condition
    }
    cout << "Before: \"" << str << "\"" << endl;  // Display remove spaces from a string result
    cout << "After : \"" << res << "\"" << endl;  // Display remove spaces from a string result
    return 0;                                     // Exit program successfully
}
