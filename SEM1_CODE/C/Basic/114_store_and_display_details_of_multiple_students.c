#include <stdio.h>

struct Student {
    int rollNo;                                                      // Declare variables for calculation
    char name[50];                                                   // Declare variables for calculation
    float marks;                                                     // Declare variables for calculation
};

int main(void) {
    struct Student students[3] = {                                   // Perform calculation
        {101, "Alice", 92.5f},
        {102, "Bob", 81.0f},
        {103, "Charlie", 76.5f}
    };

    printf("--- Student Directory ---\n");                           // Display store and display details of mul... result
    for (int i = 0; i < 3; i++) {                                    // Iterate through loop
        printf("Student %d -> Roll: %d, Name: %-8s, Marks: %.2f\n",  // Display store and display details of mul... result
               i + 1, students[i].rollNo, students[i].name, students[i].marks);
    }
    return 0;                                                        // Exit program successfully
}
