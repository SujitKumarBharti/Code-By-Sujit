#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;                              // Declare variables for calculation
    char name[50];                           // Declare variables for calculation
    float marks;                             // Declare variables for calculation
};

int main(void) {
    struct Student s1;
    s1.rollNo = 101;                         // Perform calculation
    strcpy(s1.name, "Sujit Kumar");
    s1.marks = 88.5f;                        // Perform calculation

    printf("--- Student Details ---\n");     // Display create a structure for student d... result
    printf("Roll No: %d\n", s1.rollNo);      // Display create a structure for student d... result
    printf("Name   : %s\n", s1.name);        // Display create a structure for student d... result
    printf("Marks  : %.2f\n", s1.marks);     // Display create a structure for student d... result
    return 0;                                // Exit program successfully
}
