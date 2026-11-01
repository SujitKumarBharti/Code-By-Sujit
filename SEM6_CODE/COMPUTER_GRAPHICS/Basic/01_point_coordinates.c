#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("Enter x and y coordinates: ");
    if (scanf("%d %d", &x, &y) != 2) { // Read a point
        return 1;
    }
    printf("Point: (%d, %d)\n", x, y);
    return 0;
}