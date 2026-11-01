#include <iostream>
using namespace std;

int add(int a, int b) {                                     // Declare variables for calculation
    return a + b;
}

int main() {
    int x = 25, y = 35;                                     // Initialize variable
    cout << x << " + " << y << " = " << add(x, y) << endl;  // Display add two numbers using a function result
    return 0;                                               // Exit program successfully
}
