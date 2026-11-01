#include <iostream>
using namespace std;

int main() {
    string s1 = "Antigravity";                                                      // Perform calculation
    string s2 = "Antigravity";                                                      // Perform calculation

    bool equal = true;                                                              // Initialize variable
    if (s1.length() != s2.length()) {                                               // Check condition
        equal = false;                                                              // Perform calculation
    } else {
        for (size_t i = 0; i < s1.length(); i++) {                                  // Iterate through loop
            if (s1[i] != s2[i]) {                                                   // Check condition
                equal = false;                                                      // Perform calculation
                break;
            }
        }
    }

    if (equal) cout << "\"" << s1 << "\" and \"" << s2 << "\" are EQUAL." << endl;  // Display compare two strings without usin... result
    else cout << "\"" << s1 << "\" and \"" << s2 << "\" are NOT equal." << endl;    // Display compare two strings without usin... result
    return 0;                                                                       // Exit program successfully
}
