#include <stdio.h>

#define BOARD_SIZE 8

static int columns[BOARD_SIZE];
static int first_solution[BOARD_SIZE];
static int solution_count;

static int is_safe(int row, int column) {
    for (int previous_row = 0; previous_row < row; previous_row++) {   // Loop through elements
        int previous_column = columns[previous_row];                   // Initialize variable
        if (previous_column == column ||                               // Check condition
            previous_column - previous_row == column - row ||
            previous_column + previous_row == column + row) return 0;
    }
    return 1;                                                          // Exit with error status code
}

static void place_queen(int row) {
    if (row == BOARD_SIZE) {                                           // Check condition
        if (solution_count == 0)                                       // Check if value equals zero
            for (int index = 0; index < BOARD_SIZE; index++)           // Loop through elements
                first_solution[index] = columns[index];                // Calculate and assign value
        solution_count++;                                              // Increment counter
        return;                                                        // Return from function
    }
    for (int column = 0; column < BOARD_SIZE; column++) {              // Loop through elements
        if (is_safe(row, column)) {                                    // Check condition
            columns[row] = column;                                     // Calculate and assign value
            place_queen(row + 1);
        }
    }
}

int main(void) {
    place_queen(0);
    printf("One valid 8-Queens arrangement (Q = queen):\n");           // Display output result
    for (int row = 0; row < BOARD_SIZE; row++) {                       // Loop through elements
        for (int column = 0; column < BOARD_SIZE; column++)            // Loop through elements
            printf("%c ", first_solution[row] == column ? 'Q' : '.');  // Display output result
        printf("\n");                                                  // Display output result
    }
    printf("Total solutions: %d\n", solution_count);                   // Display total solutions
    return 0;                                                          // Exit program successfully
}
