#include <stdio.h>
#include <stdlib.h>

#define MAX_DEGREE 20

typedef struct Term {
    int coefficient;                                                                // Declare variable
    int exponent;                                                                   // Declare variable
    struct Term *next;                                                              // Declare variable
} Term;

void add_term(Term **polynomial, int coefficient, int exponent) {
    if (coefficient == 0) return;                                                   // Check if value equals zero
    while (*polynomial != NULL && (*polynomial)->exponent > exponent)               // Iterate while condition holds
        polynomial = &(*polynomial)->next;                                          // Calculate and assign value
    if (*polynomial != NULL && (*polynomial)->exponent == exponent) {               // Check pointer validity
        (*polynomial)->coefficient += coefficient;                                  // Accumulate updated value
        return;                                                                     // Return from function
    }
    Term *term = malloc(sizeof(*term));                                             // Dynamically allocate memory
    if (term == NULL) exit(1);                                                      // Check pointer validity
    *term = (Term){coefficient, exponent, *polynomial};                             // Calculate and assign value
    *polynomial = term;                                                             // Calculate and assign value
}

void print_polynomial(const Term *polynomial) {
    if (polynomial == NULL) {                                                       // Check pointer validity
        printf("0");                                                                // Display 0
        return;                                                                     // Return from function
    }
    int first = 1;                                                                  // Initialize variable
    while (polynomial != NULL) {                                                    // Iterate while condition holds
        if (!first && polynomial->coefficient > 0) printf(" + ");                   // Display +
        else if (!first) printf(" ");                                               // Display output result
        printf("%dx^%d", polynomial->coefficient, polynomial->exponent);            // Display output result
        first = 0;                                                                  // Calculate and assign value
        polynomial = polynomial->next;                                              // Calculate and assign value
    }
}

void free_polynomial(Term *polynomial) {
    while (polynomial != NULL) {                                                    // Iterate while condition holds
        Term *next = polynomial->next;                                              // Calculate and assign value
        free(polynomial);                                                           // Deallocate allocated memory
        polynomial = next;                                                          // Calculate and assign value
    }
}

int main(void) {
    int first[MAX_DEGREE + 1] = {0};                                                // Initialize variable
    int second[MAX_DEGREE + 1] = {0};                                               // Initialize variable
    int array_sum[MAX_DEGREE + 1];                                                  // Declare variable
    Term *first_list = NULL;                                                        // Calculate and assign value
    Term *second_list = NULL;                                                       // Calculate and assign value
    Term *list_sum = NULL;                                                          // Calculate and assign value
    int degree;                                                                     // Declare variable

    printf("Enter maximum polynomial degree (0-%d): ", MAX_DEGREE);                 // Prompt user to enter maximum polynomial degree (0-%d)
    if (scanf("%d", &degree) != 1 || degree < 0 || degree > MAX_DEGREE) return 1;   // Read user input values
    printf("Enter coefficients from x^0 through x^%d for polynomial 1: ", degree);  // Prompt user to enter coefficients from x^0 through x^%d for polynomial 1
    for (int exponent = 0; exponent <= degree; exponent++)                          // Loop through elements
        if (scanf("%d", &first[exponent]) != 1) return 1;                           // Read user input values
    printf("Enter coefficients from x^0 through x^%d for polynomial 2: ", degree);  // Prompt user to enter coefficients from x^0 through x^%d for polynomial 2
    for (int exponent = 0; exponent <= degree; exponent++)                          // Loop through elements
        if (scanf("%d", &second[exponent]) != 1) return 1;                          // Read user input values

    for (int exponent = 0; exponent <= degree; exponent++) {                        // Loop through elements
        array_sum[exponent] = first[exponent] + second[exponent];                   // Calculate and assign value
        add_term(&first_list, first[exponent], exponent);
        add_term(&second_list, second[exponent], exponent);
        add_term(&list_sum, first[exponent] + second[exponent], exponent);
    }
    printf("Sum using arrays (ascending powers):");                                 // Display output result
    for (int exponent = 0; exponent <= degree; exponent++)                          // Loop through elements
        printf(" %dx^%d", array_sum[exponent], exponent);                           // Display output result
    printf("\nSum using linked lists (descending powers): ");                       // Display output result
    print_polynomial(list_sum);
    printf("\n");                                                                   // Display output result
    free_polynomial(first_list);
    free_polynomial(second_list);
    free_polynomial(list_sum);
    return 0;                                                                       // Exit program successfully
}
