#include <iostream>
using namespace std;

int fibonacci(int n) {                                         // Declare variables for calculation
    if (n <= 0) return 0;                                      // Check condition
    if (n == 1) return 1;                                      // Check condition
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms = 8;                                             // Initialize variable
    cout << "Fibonacci series up to " << terms << " terms: ";  // Display generate Fibonacci series using ... result
    for (int i = 0; i < terms; i++) {                          // Iterate through loop
        cout << fibonacci(i) << " ";                           // Display generate Fibonacci series using ... result
    }
    cout << endl;                                              // Display generate Fibonacci series using ... result
    return 0;                                                  // Exit program successfully
}
