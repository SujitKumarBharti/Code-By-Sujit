#include <stdio.h>

int main(void) {
    float s1, s2, s3;                                         // Declare variables for calculation
    printf("Enter three sides of the triangle: ");            // Prompt user for input
    if (scanf("%f %f %f", &s1, &s2, &s3) == 3) {              // Read input from user
        if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {   // Check condition
            if (s1 == s2 && s2 == s3)                         // Check condition
                printf("Equilateral Triangle\n");             // Display identify equilateral, isosceles,... result
            else if (s1 == s2 || s2 == s3 || s1 == s3)
                printf("Isosceles Triangle\n");               // Display identify equilateral, isosceles,... result
            else
                printf("Scalene Triangle\n");                 // Display identify equilateral, isosceles,... result
        } else {
            printf("Sides do not form a valid triangle.\n");  // Display identify equilateral, isosceles,... result
        }
    }
    return 0;                                                 // Exit program successfully
}
