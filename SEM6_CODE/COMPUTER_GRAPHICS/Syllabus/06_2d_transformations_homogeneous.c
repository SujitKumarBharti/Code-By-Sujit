#include <stdio.h>
#include <math.h>

void multiply2D(double mat[3][3], double vec[3], double res[3]) {
    for (int i = 0; i < 3; i++) {                                                 // Loop through elements
        res[i] = 0;                                                               // Calculate and assign value
        for (int j = 0; j < 3; j++) {                                             // Loop through elements
            res[i] += mat[i][j] * vec[j];                                         // Accumulate updated value
        }
    }
}

int main() {
    double point[3] = {10.0, 20.0, 1.0};                                          // Initialize variable
    double translateMat[3][3] = {
        {1.0, 0.0, 5.0},
        {0.0, 1.0, 10.0},
        {0.0, 0.0, 1.0}
    };
    double translated[3];                                                         // Declare variable
    multiply2D(translateMat, point, translated);
    printf("Original 2D point: (%.1f, %.1f)\n", point[0], point[1]);              // Display original 2d point
    printf("Translated 2D point: (%.1f, %.1f)\n", translated[0], translated[1]);  // Display translated 2d point

    double scaleMat[3][3] = {
        {2.0, 0.0, 0.0},
        {0.0, 2.0, 0.0},
        {0.0, 0.0, 1.0}
    };
    double scaled[3];                                                             // Declare variable
    multiply2D(scaleMat, point, scaled);
    printf("Scaled 2D point: (%.1f, %.1f)\n", scaled[0], scaled[1]);              // Display scaled 2d point
    return 0;                                                                     // Exit program successfully
}
