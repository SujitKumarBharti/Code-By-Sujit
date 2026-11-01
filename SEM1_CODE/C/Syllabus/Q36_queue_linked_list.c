#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;                                                          // Declare variable
    struct Node *next;                                                  // Declare variable
} Node;

int main(void) {
    Node *front = NULL;                                                 // Initialize variable
    Node *rear = NULL;                                                  // Initialize variable
    int choice;                                                         // Declare variable

    do {
        printf("\n1 Enqueue  2 Dequeue  3 Display  0 Exit\nChoice: ");  // Display output result
        if (scanf("%d", &choice) != 1) break;                           // Read user input values
        if (choice == 1) {                                              // Check condition
            Node *node = malloc(sizeof(*node));                         // Dynamically allocate memory
            if (node == NULL) return 1;                                 // Check pointer validity
            printf("Enter value: ");                                    // Prompt user to enter value
            if (scanf("%d", &node->value) != 1) {                       // Read user input values
                free(node);                                             // Deallocate allocated memory
                break;                                                  // Exit loop or switch block
            }
            node->next = NULL;                                          // Calculate and assign value
            if (rear == NULL) front = node;                             // Check pointer validity
            else rear->next = node;                                     // Calculate and assign value
            rear = node;                                                // Calculate and assign value
        } else if (choice == 2) {                                       // Check condition
            if (front == NULL) printf("Queue is empty.\n");             // Display queue is empty.\n
            else {
                Node *removed = front;                                  // Initialize variable
                printf("Removed: %d\n", removed->value);                // Display removed
                front = front->next;                                    // Calculate and assign value
                if (front == NULL) rear = NULL;                         // Check pointer validity
                free(removed);                                          // Deallocate allocated memory
            }
        } else if (choice == 3) {                                       // Check condition
            for (Node *node = front; node != NULL; node = node->next)   // Loop through elements
                printf("%d ", node->value);                             // Display , node->value);
            printf("\n");                                               // Display output result
        } else if (choice != 0) {                                       // Check condition
            printf("Invalid choice.\n");                                // Display error message
        }
    } while (choice != 0);
    while (front != NULL) {                                             // Iterate while condition holds
        Node *next = front->next;                                       // Initialize variable
        free(front);                                                    // Deallocate allocated memory
        front = next;                                                   // Calculate and assign value
    }
    return 0;                                                           // Exit program successfully
}
