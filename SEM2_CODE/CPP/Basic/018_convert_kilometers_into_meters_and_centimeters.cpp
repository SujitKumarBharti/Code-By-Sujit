#include <iostream>
using namespace std;

int main() {
    double km;                                                                              // Declare variables for calculation
    cout << "Enter distance in kilometers: ";                                               // Prompt user for input
    if (cin >> km) {                                                                        // Read input from user
        double meters = km * 1000.0;                                                        // Initialize variable
        double cm = km * 100000.0;                                                          // Initialize variable
        cout << km << " km = " << meters << " meters = " << cm << " centimeters." << endl;  // Display convert kilometers into meters a... result
    }
    return 0;                                                                               // Exit program successfully
}
