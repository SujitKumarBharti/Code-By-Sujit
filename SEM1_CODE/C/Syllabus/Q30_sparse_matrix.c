#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLUMNS 10
#define MAX_NONZERO (MAX_ROWS * MAX_COLUMNS)

void print_triplets(const int triplets[MAX_NONZERO + 1][3]) {
    int nonzero_count = triplets[0][2];                                         // Initialize variable
    printf("Row\tColumn\tValue\n");                                             // Display row\tcolumn\tvalue\n
    for (int index = 0; index <= nonzero_count; index++)                        // Loop through elements
        printf("%d\t%d\t%d\n", triplets[index][0], triplets[index][1],          // Display output result
               triplets[index][2]);
}

int main(void) {
    int rows;                                                                   // Declare variable
    int columns;                                                                // Declare variable
    int matrix[MAX_ROWS][MAX_COLUMNS];                                          // Declare variable
    int triplets[MAX_NONZERO + 1][3] = {{0}};                                   // Initialize variable
    int transposed[MAX_NONZERO + 1][3] = {{0}};                                 // Initialize variable
    int count = 0;                                                              // Initialize variable

    printf("Enter rows and columns (max %d x %d): ", MAX_ROWS, MAX_COLUMNS);    // Prompt user to enter rows and columns (max %d x %d)
    if (scanf("%d %d", &rows, &columns) != 2 || rows < 1 || rows > MAX_ROWS ||  // Read user input values
        columns < 1 || columns > MAX_COLUMNS) return 1;
    printf("Enter matrix values:\n");                                           // Prompt user to enter matrix values
    for (int row = 0; row < rows; row++) {                                      // Loop through elements
        for (int column = 0; column < columns; column++) {                      // Loop through elements
            if (scanf("%d", &matrix[row][column]) != 1) return 1;               // Read user input values
            if (matrix[row][column] != 0) {                                     // Check condition
                count++;                                                        // Increment counter
                triplets[count][0] = row;                                       // Calculate and assign value
                triplets[count][1] = column;                                    // Calculate and assign value
                triplets[count][2] = matrix[row][column];                       // Calculate and assign value
            }
        }
    }
    triplets[0][0] = rows;                                                      // Calculate and assign value
    triplets[0][1] = columns;                                                   // Calculate and assign value
    triplets[0][2] = count;                                                     // Calculate and assign value
    printf("Sparse triplet representation:\n");                                 // Display sparse triplet representation
    print_triplets(triplets);

    transposed[0][0] = columns;                                                 // Calculate and assign value
    transposed[0][1] = rows;                                                    // Calculate and assign value
    transposed[0][2] = count;                                                   // Calculate and assign value
    int output = 1;                                                             // Initialize variable
    for (int column = 0; column < columns; column++) {                          // Loop through elements
        for (int index = 1; index <= count; index++) {                          // Loop through elements
            if (triplets[index][1] == column) {                                 // Check condition
                transposed[output][0] = triplets[index][1];                     // Calculate and assign value
                transposed[output][1] = triplets[index][0];                     // Calculate and assign value
                transposed[output][2] = triplets[index][2];                     // Calculate and assign value
                output++;                                                       // Increment counter
            }
        }
    }
    printf("Transpose in triplet form:\n");                                     // Display transpose in triplet form
    print_triplets(transposed);
    return 0;                                                                   // Exit program successfully
}
