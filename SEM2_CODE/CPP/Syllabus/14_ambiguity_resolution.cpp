#include <iostream>

class ClassA {
public:
    void display() {
        std::cout << "Display from ClassA\n";                      // Display display from classa\n
    }
};

class ClassB {
public:
    void display() {
        std::cout << "Display from ClassB\n";                      // Display display from classb\n
    }
};

class Derived : public ClassA, public ClassB {
public:
    void showBoth() {
        ClassA::display();
        ClassB::display();
    }
};

int main() {
    Derived obj;                                                   // Instantiate object
    std::cout << "Resolving ambiguity using scope resolution:\n";  // Display output result
    obj.ClassA::display();
    obj.ClassB::display();
    return 0;                                                      // Exit program successfully
}
