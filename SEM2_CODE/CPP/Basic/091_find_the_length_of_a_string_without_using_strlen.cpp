#include <iostream>
using namespace std;

int main() {
    string str = "Programming in C++";                                  // Perform calculation
    int length = 0;                                                     // Initialize variable
    while (str[length] != '\0') {                                       // Iterate through loop
        length++;
    }
    cout << "String: \"" << str << "\"" << endl;                        // Display find the length of a string with... result
    cout << "Length without built-in size/strlen: " << length << endl;  // Display find the length of a string with... result
    return 0;                                                           // Exit program successfully
}
