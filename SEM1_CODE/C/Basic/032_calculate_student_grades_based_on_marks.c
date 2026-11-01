#include <stdio.h>

int main(void) {
    float marks;                                                 // Declare variables for calculation
    printf("Enter marks out of 100: ");                          // Prompt user for input
    if (scanf("%f", &marks) == 1) {                              // Read input from user
        if (marks >= 90 && marks <= 100) printf("Grade: A+\n");  // Display calculate student grades based o... result
        else if (marks >= 80) printf("Grade: A\n");              // Display calculate student grades based o... result
        else if (marks >= 70) printf("Grade: B\n");              // Display calculate student grades based o... result
        else if (marks >= 60) printf("Grade: C\n");              // Display calculate student grades based o... result
        else if (marks >= 50) printf("Grade: D\n");              // Display calculate student grades based o... result
        else if (marks >= 0) printf("Grade: F (Fail)\n");        // Display calculate student grades based o... result
        else printf("Invalid marks entered.\n");                 // Display error message for invalid input
    }
    return 0;                                                    // Exit program successfully
}
