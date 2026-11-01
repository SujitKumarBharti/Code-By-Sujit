#include <iostream>
using namespace std;

int main() {
    int year;                                                         // Declare variables for calculation
    cout << "Enter a year: ";                                         // Prompt user for input
    if (cin >> year) {                                                // Read input from user
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  // Check condition
            cout << year << " is a Leap Year." << endl;               // Display check whether a year is a leap year result
        else
            cout << year << " is NOT a Leap Year." << endl;           // Display check whether a year is a leap year result
    }
    return 0;                                                         // Exit program successfully
}
