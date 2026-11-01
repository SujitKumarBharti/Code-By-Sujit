#include <iostream>
using namespace std;

int main() {
    int rows = 5;                                   // Initialize variable
    for (int i = rows; i >= 1; i--) {               // Iterate through loop
        for (int j = 1; j <= i; j++) cout << "* ";  // Display print an inverted triangle star ... result
        cout << endl;                               // Display print an inverted triangle star ... result
    }
    return 0;                                       // Exit program successfully
}
