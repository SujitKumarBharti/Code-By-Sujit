#include <iostream>
#include <string>

class Item {
public:
    int id;                                                       // Declare variable
    std::string name;                                             // Declare variable
    void show() {
        std::cout << "ID: " << id << ", Name: " << name << "\n";  // Display id
    }
};

int main() {
    Item item;                                                    // Instantiate object
    Item *ptr = &item;                                            // Calculate and assign value
    ptr->id = 101;                                                // Calculate and assign value
    ptr->name = "Laptop";                                         // Calculate and assign value
    ptr->show();
    return 0;                                                     // Exit program successfully
}
