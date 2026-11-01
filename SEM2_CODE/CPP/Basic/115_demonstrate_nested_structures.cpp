#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string state;
};

struct Person {
    string name;
    int age;                                            // Declare variables for calculation
    Address addr;
};

int main() {
    Person p = {"Sujit", 20, {"Ranchi", "Jharkhand"}};  // Perform calculation

    cout << "Person Details:" << endl;                  // Display demonstrate nested structures result
    cout << "Name : " << p.name << endl;                // Display demonstrate nested structures result
    cout << "Age  : " << p.age << endl;                 // Display demonstrate nested structures result
    cout << "City : " << p.addr.city << endl;           // Display demonstrate nested structures result
    cout << "State: " << p.addr.state << endl;          // Display demonstrate nested structures result
    return 0;                                           // Exit program successfully
}
