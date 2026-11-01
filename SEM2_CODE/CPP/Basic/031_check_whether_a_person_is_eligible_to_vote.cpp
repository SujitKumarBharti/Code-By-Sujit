#include <iostream>
using namespace std;

int main() {
    int age;                                                                                   // Declare variables for calculation
    cout << "Enter your age: ";                                                                // Prompt user for input
    if (cin >> age) {                                                                          // Read input from user
        if (age >= 18) cout << "Eligible to vote." << endl;                                    // Display check whether a person is eligib... result
        else cout << "Not eligible to vote. Wait " << (18 - age) << " more year(s)." << endl;  // Display check whether a person is eligib... result
    }
    return 0;                                                                                  // Exit program successfully
}
