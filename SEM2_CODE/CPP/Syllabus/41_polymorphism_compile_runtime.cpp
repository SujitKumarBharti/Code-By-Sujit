#include <iostream>

class Math {
public:
    int multiply(int a, int b) {
        return a * b;                                           // Return computed result a * b
    }
    double multiply(double a, double b) {
        return a * b;                                           // Return computed result a * b
    }
};

class BaseShape {
public:
    virtual void draw() {
        std::cout << "Drawing generic shape\n";                 // Display drawing generic shape\n
    }
};

class Circle : public BaseShape {
public:
    void draw() override {
        std::cout << "Drawing Circle\n";                        // Display drawing circle\n
    }
};

int main() {
    Math m;                                                     // Instantiate object
    std::cout << "Compile Time: " << m.multiply(4, 5) << "\n";  // Display compile time

    BaseShape *shape = new Circle();                            // Instantiate new object
    std::cout << "Runtime: ";                                   // Display runtime
    shape->draw();
    delete shape;
    return 0;                                                   // Exit program successfully
}
