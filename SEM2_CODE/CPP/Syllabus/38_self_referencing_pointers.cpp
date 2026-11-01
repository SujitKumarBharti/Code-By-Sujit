#include <iostream>

class Node {
public:
    int data;                                             // Declare variable
    Node *next;                                           // Declare variable
    Node(int d) {
        data = d;                                         // Calculate and assign value
        next = nullptr;                                   // Calculate and assign value
    }
};

int main() {
    Node *head = new Node(10);                            // Instantiate new object
    head->next = new Node(20);                            // Instantiate new object
    std::cout << "Node 1: " << head->data << "\n";        // Display node 1
    std::cout << "Node 2: " << head->next->data << "\n";  // Display node 2
    delete head->next;
    delete head;
    return 0;                                             // Exit program successfully
}
