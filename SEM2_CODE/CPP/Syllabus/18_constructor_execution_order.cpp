#include <iostream>

class BaseOne {
public:
    BaseOne() {
        std::cout << "BaseOne constructor called\n";  // Display baseone constructor called\n
    }
    ~BaseOne() {
        std::cout << "BaseOne destructor called\n";   // Display baseone destructor called\n
    }
};

class BaseTwo {
public:
    BaseTwo() {
        std::cout << "BaseTwo constructor called\n";  // Display basetwo constructor called\n
    }
    ~BaseTwo() {
        std::cout << "BaseTwo destructor called\n";   // Display basetwo destructor called\n
    }
};

class Derived : public BaseOne, public BaseTwo {
public:
    Derived() {
        std::cout << "Derived constructor called\n";  // Display derived constructor called\n
    }
    ~Derived() {
        std::cout << "Derived destructor called\n";   // Display derived destructor called\n
    }
};

int main() {
    std::cout << "Creating Derived object:\n";        // Display creating derived object
    Derived d;                                        // Instantiate object
    std::cout << "Exiting main scope:\n";             // Display exiting main scope
    return 0;                                         // Exit program successfully
}
