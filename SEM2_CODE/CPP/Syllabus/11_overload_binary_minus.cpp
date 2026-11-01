#include <iostream>

class Complex {
private:
    int real;                                                  // Declare variable
    int imag;                                                  // Declare variable
public:
    Complex(int r = 0, int i = 0) {
        real = r;                                              // Calculate and assign value
        imag = i;                                              // Calculate and assign value
    }
    Complex operator-(const Complex &other) {
        return Complex(real - other.real, imag - other.imag);  // Return computed result
    }
    void display() {
        std::cout << real << " + " << imag << "i\n";           // Display +
    }
};

int main() {
    Complex c1(10, 8);                                         // Instantiate object
    Complex c2(4, 3);                                          // Instantiate object
    Complex c3 = c1 - c2;                                      // Calculate and assign value
    std::cout << "Difference of complex numbers: ";            // Display difference of complex numbers
    c3.display();                                              // Call member function display()
    return 0;                                                  // Exit program successfully
}
