#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;                                                             // Declare variable
    struct Node *next;                                                     // Declare variable
} Node;

int main(void) {
    Node *head = NULL;                                                     // Initialize variable
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
            while (head != NULL) {                                         // Iterate while condition holds
                Node *next = head->next;                                   // Initialize variable
                free(head);                                                // Deallocate allocated memory
                head = next;                                               // Calculate and assign value
            }
            return 1;                                                      // Exit with error status code
        }
        node->next = NULL;                                                 // Calculate and assign value
        if (tail == NULL) head = node;                                     // Check pointer validity
        else tail->next = node;                                            // Calculate and assign value
        tail = node;                                                       // Calculate and assign value
    }

    printf("Linked list:");                                                // Display linked list
    for (Node *node = head; node != NULL; node = node->next)               // Loop through elements
        printf(" %d", node->value);                                        // Display output result
    printf("\n");                                                          // Display output result
    while (head != NULL) {                                                 // Iterate while condition holds
        Node *next = head->next;                                           // Initialize variable
        free(head);                                                        // Deallocate allocated memory
        head = next;                                                       // Calculate and assign value
    }
    return 0;                                                              // Exit program successfully
}
