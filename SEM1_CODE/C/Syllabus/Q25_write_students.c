#include <stdio.h>

#define STUDENT_COUNT 10

typedef struct {
    int roll_number;                                                            // Declare variable
    char name[50];                                                              // Declare variable
    char class_name[30];                                                        // Declare variable
    int year;                                                                   // Declare variable
    float total_marks;                                                          // Declare variable
} Student;

int main(void) {
    Student student;                                                            // Instantiate object
    FILE *file = fopen("students.txt", "w");                                    // Calculate and assign value
    if (file == NULL) {                                                         // Check pointer validity
        perror("students.txt");
        return 1;                                                               // Exit with error status code
    }

    for (int index = 0; index < STUDENT_COUNT; index++) {                       // Loop through elements
        printf("Student %d (roll name class year total_marks): ", index + 1);   // Display student
        if (scanf("%d %49s %29s %d %f", &student.roll_number, student.name,     // Read user input values
                  student.class_name, &student.year, &student.total_marks) != 5) {
            fclose(file);
            return 1;                                                           // Exit with error status code
        }
        fprintf(file, "%d %s %s %d %.2f\n", student.roll_number, student.name,  // Display output result
                student.class_name, student.year, student.total_marks);
    }
    if (fclose(file) != 0) return 1;                                            // Check condition
    printf("Saved %d student records to students.txt.\n", STUDENT_COUNT);       // Display saved
    return 0;                                                                   // Exit program successfully
}
