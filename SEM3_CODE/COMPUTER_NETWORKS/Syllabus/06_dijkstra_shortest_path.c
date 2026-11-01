#include <stdio.h>

#define V 4
#define INF 9999

int minDistance(int dist[], int visited[]) {
    int min = INF, min_index = -1;                                                       // Initialize variable
    for (int v = 0; v < V; v++) {                                                        // Loop through elements
        if (!visited[v] && dist[v] <= min) {                                             // Evaluate comparison condition
            min = dist[v];                                                               // Calculate and assign value
            min_index = v;                                                               // Calculate and assign value
        }
    }
    return min_index;                                                                    // Return computed result min_index
}

int main() {
    int graph[V][V] = {
        {0, 4, 1, INF},
        {4, 0, 2, 5},
        {1, 2, 0, 8},
        {INF, 5, 8, 0}
    };
    int dist[V];                                                                         // Declare variable
    int visited[V];                                                                      // Declare variable
    for (int i = 0; i < V; i++) {                                                        // Loop through elements
        dist[i] = INF;                                                                   // Calculate and assign value
        visited[i] = 0;                                                                  // Calculate and assign value
    }
    dist[0] = 0;                                                                         // Calculate and assign value
    for (int count = 0; count < V - 1; count++) {                                        // Loop through elements
        int u = minDistance(dist, visited);                                              // Initialize variable
        visited[u] = 1;                                                                  // Calculate and assign value
        for (int v = 0; v < V; v++) {                                                    // Loop through elements
            if (!visited[v] && graph[u][v] != INF && dist[u] + graph[u][v] < dist[v]) {  // Evaluate comparison condition
                dist[v] = dist[u] + graph[u][v];                                         // Calculate and assign value
            }
        }
    }
    printf("Vertex\tDistance from Source (0)\n");                                        // Display output result
    for (int i = 0; i < V; i++) {                                                        // Loop through elements
        printf("%d\t%d\n", i, dist[i]);                                                  // Display , i, dist[i]);
    }
    return 0;                                                                            // Exit program successfully
}
