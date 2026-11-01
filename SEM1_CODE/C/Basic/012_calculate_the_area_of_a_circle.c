#include <stdio.h>

int main(void) {
    float radius, area;                          // Declare variables for calculation
    const float PI = 3.14159265f;                // Perform calculation
    printf("Enter radius of the circle: ");      // Prompt user for input
    if (scanf("%f", &radius) == 1) {             // Read input from user
        area = PI * radius * radius;             // Perform calculation
        printf("Area of Circle: %.2f\n", area);  // Display calculate the area of a circle result
    }
    return 0;                                    // Exit program successfully
}
