#include <stdio.h>

typedef struct {
    double x, y, z;                                                         // Declare variable
} Point3D;

void parallelProjection(Point3D p) {
    printf("Parallel Projection (X, Y): (%.2f, %.2f)\n", p.x, p.y);         // Display parallel projection (x, y)
}

void perspectiveProjection(Point3D p, double d) {
    if (p.z + d != 0) {                                                     // Check condition
        double xp = (p.x * d) / (p.z + d);                                  // Initialize variable
        double yp = (p.y * d) / (p.z + d);                                  // Initialize variable
        printf("Perspective Projection (Xp, Yp): (%.2f, %.2f)\n", xp, yp);  // Display output result
    }
}

int main() {
    Point3D p = {10.0, 20.0, 30.0};                                         // Calculate and assign value
    printf("Original 3D point: (%.2f, %.2f, %.2f)\n", p.x, p.y, p.z);       // Display original 3d point
    parallelProjection(p);
    perspectiveProjection(p, 50.0);
    return 0;                                                               // Exit program successfully
}
