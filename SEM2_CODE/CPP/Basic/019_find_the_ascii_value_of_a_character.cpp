#include <iostream>
using namespace std;

int main() {
    char ch;                                                             // Declare variables for calculation
    cout << "Enter a character: ";                                       // Prompt user for input
    if (cin >> ch) {                                                     // Read input from user
        cout << "ASCII value of '" << ch << "' is " << int(ch) << endl;  // Display find the ASCII value of a character result
    }
    return 0;                                                            // Exit program successfully
}
