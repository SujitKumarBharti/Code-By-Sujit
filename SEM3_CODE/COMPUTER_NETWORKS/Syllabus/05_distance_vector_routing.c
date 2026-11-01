#include <stdio.h>

#define INF 9999
#define NODES 3

int main() {
    int cost[NODES][NODES] = {
        {0, 2, 7},
        {2, 0, 1},
        {7, 1, 0}
    };
    int dist[NODES][NODES];                                           // Declare variable
    for (int i = 0; i < NODES; i++) {                                 // Loop through elements
        for (int j = 0; j < NODES; j++) {                             // Loop through elements
            dist[i][j] = cost[i][j];                                  // Calculate and assign value
        }
    }
    for (int k = 0; k < NODES; k++) {                                 // Loop through elements
        for (int i = 0; i < NODES; i++) {                             // Loop through elements
            for (int j = 0; j < NODES; j++) {                         // Loop through elements
                if (dist[i][k] + dist[k][j] < dist[i][j]) {           // Evaluate comparison condition
                    dist[i][j] = dist[i][k] + dist[k][j];             // Calculate and assign value
                }
            }
        }
    }
    printf("Distance Vector Routing Table (Shortest Distances):\n");  // Display output result
    for (int i = 0; i < NODES; i++) {                                 // Loop through elements
        for (int j = 0; j < NODES; j++) {                             // Loop through elements
            printf("%d\t", dist[i][j]);                               // Display , dist[i][j]);
        }
        printf("\n");                                                 // Display output result
    }
    return 0;                                                         // Exit program successfully
}
