#include <stdio.h>

#define MAX_VERTICES 50
#define INFINITY_COST 1000000000

int main(void) {
    int count;                                                                    // Declare variable
    int graph[MAX_VERTICES][MAX_VERTICES];                                        // Declare variable
    int included[MAX_VERTICES] = {0};                                             // Initialize variable
    int minimum_cost = 0;                                                         // Initialize variable

    printf("Enter number of vertices (1-%d): ", MAX_VERTICES);                    // Prompt user to enter number of vertices (1-%d)
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_VERTICES) return 1;  // Read user input values
    printf("Enter adjacency matrix (0 means no edge):\n");                        // Prompt user to enter adjacency matrix (0 means no edge)
    for (int row = 0; row < count; row++)                                         // Loop through elements
        for (int column = 0; column < count; column++)                            // Loop through elements
            if (scanf("%d", &graph[row][column]) != 1) return 1;                  // Read user input values

    int best_edge[MAX_VERTICES];                                                  // Declare variable
    int parent[MAX_VERTICES];                                                     // Declare variable
    for (int vertex = 0; vertex < count; vertex++) {                              // Loop through elements
        best_edge[vertex] = INFINITY_COST;                                        // Calculate and assign value
        parent[vertex] = -1;                                                      // Calculate and assign value
    }
    best_edge[0] = 0;                                                             // Calculate and assign value
    printf("MST edges:\n");                                                       // Display mst edges
    for (int step = 0; step < count; step++) {                                    // Loop through elements
        int current = -1;                                                         // Initialize variable
        for (int vertex = 0; vertex < count; vertex++)                            // Loop through elements
            if (!included[vertex] &&                                              // Check condition
                (current == -1 || best_edge[vertex] < best_edge[current])) current = vertex;
        if (current == -1 || best_edge[current] == INFINITY_COST) {               // Check condition
            printf("Graph is disconnected; spanning tree does not exist.\n");     // Display output result
            return 1;                                                             // Exit with error status code
        }
        included[current] = 1;                                                    // Calculate and assign value
        if (parent[current] != -1) {                                              // Check condition
            printf("%d - %d (weight %d)\n", parent[current] + 1,                  // Display , parent[current] + 1,
                   current + 1, best_edge[current]);
            minimum_cost += best_edge[current];                                   // Accumulate updated value
        }
        for (int next = 0; next < count; next++) {                                // Loop through elements
            if (!included[next] && graph[current][next] != 0 &&                   // Check condition
                graph[current][next] < best_edge[next]) {
                best_edge[next] = graph[current][next];                           // Calculate and assign value
                parent[next] = current;                                           // Calculate and assign value
            }
        }
    }
    printf("Minimum spanning tree cost: %d\n", minimum_cost);                     // Display minimum spanning tree cost
    return 0;                                                                     // Exit program successfully
}
