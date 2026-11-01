#include <stdio.h>

typedef struct Node {
    int value;                               // Declare variable
    struct Node *left;                       // Declare variable
    struct Node *right;                      // Declare variable
} Node;

void preorder(const Node *node) {
    if (node == NULL) return;                // Check pointer validity
    printf("%d ", node->value);              // Display , node->value);
    preorder(node->left);
    preorder(node->right);
}

void inorder(const Node *node) {
    if (node == NULL) return;                // Check pointer validity
    inorder(node->left);
    printf("%d ", node->value);              // Display , node->value);
    inorder(node->right);
}

void postorder(const Node *node) {
    if (node == NULL) return;                // Check pointer validity
    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->value);              // Display , node->value);
}

int main(void) {
    Node fourth = {4, NULL, NULL};           // Calculate and assign value
    Node fifth = {5, NULL, NULL};            // Calculate and assign value
    Node second = {2, &fourth, &fifth};      // Calculate and assign value
    Node third = {3, NULL, NULL};            // Calculate and assign value
    Node root = {1, &second, &third};        // Calculate and assign value

    printf("Preorder: ");                    // Display preorder
    preorder(&root);
    printf("\nInorder: ");                   // Display output result
    inorder(&root);
    printf("\nPostorder: ");                 // Display output result
    postorder(&root);
    printf("\n");                            // Display output result
    return 0;                                // Exit program successfully
}
