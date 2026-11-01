#include <stdio.h>

#define CAPACITY 100

int main(void) {
    int stack[CAPACITY];                                                             // Declare variable
    int top = -1;                                                                    // Initialize variable
    int choice;                                                                      // Declare variable

    do {
        printf("\n1 Push  2 Pop  3 Display  0 Exit\nChoice: ");                      // Display output result
        if (scanf("%d", &choice) != 1) return 1;                                     // Read user input values
        if (choice == 1) {                                                           // Check condition
            int value;                                                               // Declare variable
            if (top == CAPACITY - 1) {                                               // Check condition
                printf("Stack is full.\n");                                          // Display stack is full.\n
            } else {
                printf("Enter value: ");                                             // Prompt user to enter value
                if (scanf("%d", &value) != 1) return 1;                              // Read user input values
                stack[++top] = value;                                                // Calculate and assign value
            }
        } else if (choice == 2) {                                                    // Check condition
            if (top == -1) printf("Stack is empty.\n");                              // Display stack is empty.\n
            else printf("Removed: %d\n", stack[top--]);                              // Display removed
        } else if (choice == 3) {                                                    // Check condition
            for (int index = top; index >= 0; index--) printf("%d ", stack[index]);  // Display , stack[index]);
            printf("\n");                                                            // Display output result
        }
    } while (choice != 0);
    return 0;                                                                        // Exit program successfully
}
