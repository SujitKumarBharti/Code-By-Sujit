#include <iostream>
#include <string>

class GrandParent {
private:
    std::string familyName;                             // Declare variable
public:
    void setFamily(const std::string &fn) {
        familyName = fn;                                // Calculate and assign value
    }
    void showFamily() const {
        std::cout << "Family: " << familyName << "\n";  // Display family
    }
};

class Parent : public GrandParent {
private:
    std::string parentName;                             // Declare variable
public:
    void setParent(const std::string &pn) {
        parentName = pn;                                // Calculate and assign value
    }
    void showParent() const {
        showFamily();
        std::cout << "Parent: " << parentName << "\n";  // Display parent
    }
};

class Child : public Parent {
private:
    std::string childName;                              // Declare variable
public:
    void setChild(const std::string &cn) {
        childName = cn;                                 // Calculate and assign value
    }
    void showChild() const {
        showParent();
        std::cout << "Child: " << childName << "\n";    // Display child
    }
};

int main() {
    Child c;                                            // Instantiate object
    c.setFamily("Sharma");
    c.setParent("Ramesh");
    c.setChild("Suresh");
    c.showChild();
    return 0;                                           // Exit program successfully
}
