#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;                                                                                   // Declare variables for calculation
    cout << "Enter an alphabet: ";                                                             // Prompt user for input
    if (cin >> ch) {                                                                           // Read input from user
        char lower = tolower(ch);                                                              // Initialize variable
        if (lower >= 'a' && lower <= 'z') {                                                    // Check condition
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')  // Check condition
                cout << "'" << ch << "' is a Vowel." << endl;                                  // Display check whether a character is a v... result
            else
                cout << "'" << ch << "' is a Consonant." << endl;                              // Display check whether a character is a v... result
        } else {
            cout << "'" << ch << "' is not an alphabet character." << endl;                    // Display check whether a character is a v... result
        }
    }
    return 0;                                                                                  // Exit program successfully
}
