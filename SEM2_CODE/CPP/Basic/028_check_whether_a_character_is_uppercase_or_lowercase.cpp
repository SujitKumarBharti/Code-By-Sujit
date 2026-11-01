#include <iostream>
using namespace std;

int main() {
    char ch;                                                                                 // Declare variables for calculation
    cout << "Enter a character: ";                                                           // Prompt user for input
    if (cin >> ch) {                                                                         // Read input from user
        if (ch >= 'A' && ch <= 'Z') cout << "'" << ch << "' is Uppercase." << endl;          // Display check whether a character is upp... result
        else if (ch >= 'a' && ch <= 'z') cout << "'" << ch << "' is Lowercase." << endl;     // Display check whether a character is upp... result
        else cout << "'" << ch << "' is neither uppercase nor lowercase alphabet." << endl;  // Display check whether a character is upp... result
    }
    return 0;                                                                                // Exit program successfully
}
