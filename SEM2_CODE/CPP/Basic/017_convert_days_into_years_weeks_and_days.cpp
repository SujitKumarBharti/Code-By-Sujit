#include <iostream>
using namespace std;

int main() {
    int total_days;                                              // Declare variables for calculation
    cout << "Enter number of days: ";                            // Prompt user for input
    if (cin >> total_days) {                                     // Read input from user
        int years = total_days / 365;                            // Initialize variable
        int weeks = (total_days % 365) / 7;                      // Initialize variable
        int days = (total_days % 365) % 7;                       // Initialize variable
        cout << total_days << " days = " << years << " years, "  // Display convert days into years, weeks, ... result
             << weeks << " weeks, and " << days << " days." << endl;
    }
    return 0;                                                    // Exit program successfully
}
