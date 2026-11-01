#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) return 1;                                                          // Check condition
    return n * factorial(n - 1);
}

int main() {
    int n = 6;                                                                     // Initialize variable
    cout << "Factorial of " << n << " using recursion: " << factorial(n) << endl;  // Display find factorial using recursion result
    return 0;                                                                      // Exit program successfully
}
