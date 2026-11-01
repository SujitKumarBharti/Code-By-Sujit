#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;                                                 // Return computed result a + b
    }
    int add(int a, int b, int c) {
        return a + b + c;                                             // Return computed result a + b + c
    }
    double add(double a, double b) {
        return a + b;                                                 // Return computed result a + b
    }
};

int main() {
    Calculator calc;                                                  // Instantiate object
    std::cout << "Sum of 2 ints: " << calc.add(5, 10) << "\n";        // Display sum of 2 ints
    std::cout << "Sum of 3 ints: " << calc.add(5, 10, 15) << "\n";    // Display sum of 3 ints
    std::cout << "Sum of 2 doubles: " << calc.add(2.5, 4.5) << "\n";  // Display sum of 2 doubles
    return 0;                                                         // Exit program successfully
}
