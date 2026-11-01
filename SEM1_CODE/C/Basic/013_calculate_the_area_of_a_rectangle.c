#include <stdio.h>

int main(void) {
    float length, width, area;                      // Declare variables for calculation
    printf("Enter length and width: ");             // Prompt user for input
    if (scanf("%f %f", &length, &width) == 2) {     // Read input from user
        area = length * width;                      // Perform calculation
        printf("Area of Rectangle: %.2f\n", area);  // Display calculate the area of a rectangle result
    }
    return 0;                                       // Exit program successfully
}
