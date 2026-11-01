#include <stdio.h>

int main(void) {
    unsigned int number;
    int bits[32];
    int count = 0;

    printf("Enter a non-negative integer: ");
    if (scanf("%u", &number) != 1) return 1;
    if (number == 0) bits[count++] = 0;
    while (number > 0) {
        bits[count++] = (int)(number % 2);
        number /= 2;
    }
    printf("Binary: ");
    while (count > 0) printf("%d", bits[--count]);
    printf("\n");
    return 0;
}