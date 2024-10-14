#include <iostream>
#include <limits.h>

using namespace std;

#define V 9

int minDistance(int dist[], bool sptSet[], int vertices) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < vertices; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void printSolution(int dist[], int vertices) {
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < vertices; i++)
        cout << i << " \t\t " << dist[i] << endl;
}

void dijkstra(int graph[V][V], int src, int vertices) {
    int dist[V];
    bool sptSet[V];

    for (int i = 0; i < vertices; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < vertices - 1; count++) {
        int u = minDistance(dist, sptSet, vertices);
        sptSet[u] = true;

        for (int v = 0; v < vertices; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist, vertices);
}

int main() {
    int vertices;
    cout << "Enter the number of vertices in the graph: ";
    cin >> vertices;

    int graph[V][V];
    
    cout << "Enter the adjacency matrix of the graph (enter 0 if no direct edge exists):\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << "Edge weight from vertex " << i << " to vertex " << j << ": ";
            cin >> graph[i][j];
        }
    }

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    dijkstra(graph, src, vertices);

    return 0;
}

