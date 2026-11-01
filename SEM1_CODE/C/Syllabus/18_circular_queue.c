#include <stdio.h>

#define CAPACITY 5

int main(void) {
    int queue[CAPACITY];                                                // Declare variable
    int front = 0;                                                      // Initialize variable
    int rear = 0;                                                       // Initialize variable
    int count = 0;                                                      // Initialize variable
    int choice;                                                         // Declare variable

    do {
        printf("\n1 Enqueue  2 Dequeue  3 Display  0 Exit\nChoice: ");  // Display output result
        if (scanf("%d", &choice) != 1) return 1;                        // Read user input values
        if (choice == 1) {                                              // Check condition
            int value;                                                  // Declare variable
            if (count == CAPACITY) {                                    // Check condition
                printf("Queue is full.\n");                             // Display queue is full.\n
            } else {
                printf("Enter value: ");                                // Prompt user to enter value
                if (scanf("%d", &value) != 1) return 1;                 // Read user input values
                queue[rear] = value;                                    // Calculate and assign value
                rear = (rear + 1) % CAPACITY;                           // Calculate and assign value
                count++;                                                // Increment counter
            }
        } else if (choice == 2) {                                       // Check condition
            if (count == 0) {                                           // Check if value equals zero
                printf("Queue is empty.\n");                            // Display queue is empty.\n
            } else {
                printf("Removed: %d\n", queue[front]);                  // Display removed
                front = (front + 1) % CAPACITY;                         // Calculate and assign value
                count--;                                                // Decrement counter
            }
        } else if (choice == 3) {                                       // Check condition
            for (int offset = 0; offset < count; offset++)              // Loop through elements
                printf("%d ", queue[(front + offset) % CAPACITY]);      // Display , queue[(front + offset)
            printf("\n");                                               // Display output result
        }
    } while (choice != 0);
    return 0;                                                           // Exit program successfully
}
