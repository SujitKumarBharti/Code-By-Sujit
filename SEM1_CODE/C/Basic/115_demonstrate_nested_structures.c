#include <stdio.h>

struct Address {
    char city[50];                                             // Declare variables for calculation
    char state[50];                                            // Declare variables for calculation
};

struct Person {
    char name[50];                                             // Declare variables for calculation
    int age;                                                   // Declare variables for calculation
    struct Address addr;
};

int main(void) {
    struct Person p = {"Sujit", 20, {"Ranchi", "Jharkhand"}};  // Perform calculation

    printf("Name : %s\n", p.name);                             // Display demonstrate nested structures result
    printf("Age  : %d\n", p.age);                              // Display demonstrate nested structures result
    printf("City : %s\n", p.addr.city);                        // Display demonstrate nested structures result
    printf("State: %s\n", p.addr.state);                       // Display demonstrate nested structures result
    return 0;                                                  // Exit program successfully
}
