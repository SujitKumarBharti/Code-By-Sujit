#include <stdio.h>

int main(void) {
    int roll_number;                                                           // Declare variable
    char name[50];                                                             // Declare variable
    char class_name[30];                                                       // Declare variable
    int year;                                                                  // Declare variable
    float total_marks;                                                         // Declare variable
    int records = 0;                                                           // Initialize variable
    FILE *file = fopen("students.txt", "r");                                   // Calculate and assign value
    if (file == NULL) {                                                        // Check pointer validity
        perror("students.txt");
        return 1;                                                              // Exit with error status code
    }

    printf("Roll No.\tName\t\tMarks\n");                                       // Display roll no.\tname\t\tmarks\n
    while (fscanf(file, "%d %49s %29s %d %f", &roll_number, name, class_name,  // Read user input values
                  &year, &total_marks) == 5) {
        printf("%d\t\t%-12s\t%.2f\n", roll_number, name, total_marks);         // Display output result
        records++;                                                             // Increment counter
    }
    if (ferror(file)) {                                                        // Check condition
        fclose(file);
        return 1;                                                              // Exit with error status code
    }
    fclose(file);
    if (records == 0) printf("No student records found.\n");                   // Display no student records found.\n
    return 0;                                                                  // Exit program successfully
}
