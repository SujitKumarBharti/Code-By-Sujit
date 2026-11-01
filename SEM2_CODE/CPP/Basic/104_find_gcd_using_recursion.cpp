#include <iostream>
using namespace std;

int gcd(int a, int b) {                                                                   // Declare variables for calculation
    if (b == 0) return a;                                                                 // Check condition
    return gcd(b, a % b);
}

int main() {
    int a = 54, b = 24;                                                                   // Initialize variable
    cout << "GCD of " << a << " and " << b << " using recursion: " << gcd(a, b) << endl;  // Display find GCD using recursion result
    return 0;                                                                             // Exit program successfully
}
