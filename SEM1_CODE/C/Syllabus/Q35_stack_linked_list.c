#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;                                                       // Declare variable
    struct Node *next;                                               // Declare variable
} Node;

int main(void) {
    Node *top = NULL;                                                // Initialize variable
    int choice;                                                      // Declare variable

    do {
        printf("\n1 Push  2 Pop  3 Display  0 Exit\nChoice: ");      // Display output result
        if (scanf("%d", &choice) != 1) break;                        // Read user input values
        if (choice == 1) {                                           // Check condition
            Node *node = malloc(sizeof(*node));                      // Dynamically allocate memory
            if (node == NULL) return 1;                              // Check pointer validity
            printf("Enter value: ");                                 // Prompt user to enter value
            if (scanf("%d", &node->value) != 1) {                    // Read user input values
                free(node);                                          // Deallocate allocated memory
                break;                                               // Exit loop or switch block
            }
            node->next = top;                                        // Calculate and assign value
            top = node;                                              // Calculate and assign value
        } else if (choice == 2) {                                    // Check condition
            if (top == NULL) printf("Stack is empty.\n");            // Display stack is empty.\n
            else {
                Node *removed = top;                                 // Initialize variable
                printf("Removed: %d\n", removed->value);             // Display removed
                top = top->next;                                     // Calculate and assign value
                free(removed);                                       // Deallocate allocated memory
            }
        } else if (choice == 3) {                                    // Check condition
            for (Node *node = top; node != NULL; node = node->next)  // Loop through elements
                printf("%d ", node->value);                          // Display , node->value);
            printf("\n");                                            // Display output result
        } else if (choice != 0) {                                    // Check condition
            printf("Invalid choice.\n");                             // Display error message
        }
    } while (choice != 0);
    while (top != NULL) {                                            // Iterate while condition holds
        Node *next = top->next;                                      // Initialize variable
        free(top);                                                   // Deallocate allocated memory
        top = next;                                                  // Calculate and assign value
    }
    return 0;                                                        // Exit program successfully
}
