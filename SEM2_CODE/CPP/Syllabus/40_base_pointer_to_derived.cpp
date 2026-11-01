#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class show\n";     // Display base class show\n
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show\n";  // Display derived class show\n
    }
};

int main() {
    Base *bptr;
    Derived d;                                // Instantiate object
    bptr = &d;                                // Calculate and assign value
    bptr->show();
    return 0;                                 // Exit program successfully
}
