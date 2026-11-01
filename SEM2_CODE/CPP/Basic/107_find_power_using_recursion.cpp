#include <iostream>
using namespace std;

double power(double base, int exp) {                                    // Declare variables for calculation
    if (exp == 0) return 1.0;                                           // Check condition
    if (exp < 0) return 1.0 / power(base, -exp);                        // Check condition
    return base * power(base, exp - 1);
}

int main() {
    double base = 3.0;                                                  // Initialize variable
    int exp = 4;                                                        // Initialize variable
    cout << base << " ^ " << exp << " = " << power(base, exp) << endl;  // Display find power using recursion result
    return 0;                                                           // Exit program successfully
}
