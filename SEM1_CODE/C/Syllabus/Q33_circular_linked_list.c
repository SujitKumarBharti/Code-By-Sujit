#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;                                                             // Declare variable
    struct Node *next;                                                     // Declare variable
} Node;

int main(void) {
    Node *tail = NULL;                                                     // Initialize variable
    int count;                                                             // Declare variable

    printf("Enter number of nodes: ");                                     // Prompt user to enter number of nodes
    if (scanf("%d", &count) != 1 || count < 0 || count > 10000) return 1;  // Read user input values
    for (int index = 0; index < count; index++) {                          // Loop through elements
        Node *node = malloc(sizeof(*node));                                // Dynamically allocate memory
        if (node == NULL) return 1;                                        // Check pointer validity
        printf("Enter value %d: ", index + 1);                             // Prompt user to enter value %d
        if (scanf("%d", &node->value) != 1) {                              // Read user input values
            free(node);                                                    // Deallocate allocated memory
            if (tail != NULL) {                                            // Check pointer validity
                Node *head = tail->next;                                   // Initialize variable
                tail->next = NULL;                                         // Calculate and assign value
                while (head != NULL) {                                     // Iterate while condition holds
                    Node *next = head->next;                               // Initialize variable
                    free(head);                                            // Deallocate allocated memory
                    head = next;                                           // Calculate and assign value
                }
            }
            return 1;                                                      // Exit with error status code
        }
        if (tail == NULL) {                                                // Check pointer validity
            node->next = node;                                             // Calculate and assign value
            tail = node;                                                   // Calculate and assign value
        } else {
            node->next = tail->next;                                       // Calculate and assign value
            tail->next = node;                                             // Calculate and assign value
            tail = node;                                                   // Calculate and assign value
        }
    }

    printf("Circular list:");                                              // Display circular list
    if (tail != NULL) {                                                    // Check pointer validity
        Node *head = tail->next;                                           // Initialize variable
        Node *node = head;                                                 // Initialize variable
        do {
            printf(" %d", node->value);                                    // Display output result
            node = node->next;                                             // Calculate and assign value
        } while (node != head);
        tail->next = NULL;                                                 // Calculate and assign value
        while (head != NULL) {                                             // Iterate while condition holds
            Node *next = head->next;                                       // Initialize variable
            free(head);                                                    // Deallocate allocated memory
            head = next;                                                   // Calculate and assign value
        }
    }
    printf("\n");                                                          // Display output result
    return 0;                                                              // Exit program successfully
}
