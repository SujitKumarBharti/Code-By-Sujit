#include <iostream>
using namespace std;

bool isPrime(int n) {                                       // Declare variables for calculation
    if (n <= 1) return false;                               // Check condition
    for (int i = 2; i * i <= n; i++) {                      // Iterate through loop
        if (n % i == 0) return false;                       // Check condition
    }
    return true;
}

int main() {
    int num = 37;                                           // Initialize variable
    if (isPrime(num)) cout << num << " is Prime." << endl;  // Display check prime number using a function result
    else cout << num << " is NOT Prime." << endl;           // Display check prime number using a function result
    return 0;                                               // Exit program successfully
}
