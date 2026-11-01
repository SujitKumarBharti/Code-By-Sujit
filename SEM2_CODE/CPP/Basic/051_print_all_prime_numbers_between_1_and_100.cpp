#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers between 1 and 100:" << endl;  // Display print all prime numbers between ... result
    for (int n = 2; n <= 100; n++) {                     // Iterate through loop
        bool isPrime = true;                             // Initialize variable
        for (int i = 2; i * i <= n; i++) {               // Iterate through loop
            if (n % i == 0) {                            // Check condition
                isPrime = false;                         // Perform calculation
                break;
            }
        }
        if (isPrime) cout << n << " ";                   // Display print all prime numbers between ... result
    }
    cout << endl;                                        // Display print all prime numbers between ... result
    return 0;                                            // Exit program successfully
}
