#include <iostream>
using namespace std;

int main() {
    string str = "madam";                                             // Perform calculation
    bool isPal = true;                                                // Initialize variable
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {          // Iterate through loop
        if (str[i] != str[j]) {                                       // Check condition
            isPal = false;                                            // Perform calculation
            break;
        }
    }
    if (isPal) cout << "\"" << str << "\" is a Palindrome." << endl;  // Display check whether a string is palind... result
    else cout << "\"" << str << "\" is NOT a Palindrome." << endl;    // Display check whether a string is palind... result
    return 0;                                                         // Exit program successfully
}
