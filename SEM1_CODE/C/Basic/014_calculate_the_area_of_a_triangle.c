#include <stdio.h>

int main(void) {
    float base, height, area;                      // Declare variables for calculation
    printf("Enter base and height: ");             // Prompt user for input
    if (scanf("%f %f", &base, &height) == 2) {     // Read input from user
        area = 0.5f * base * height;               // Perform calculation
        printf("Area of Triangle: %.2f\n", area);  // Display calculate the area of a triangle result
    }
    return 0;                                      // Exit program successfully
}
