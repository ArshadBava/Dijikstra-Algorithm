This project contains a simple implementation of Dijkstra's algorithm to find the shortest path from a given source vertex to all other vertices in a graph. The graph is represented as an adjacency matrix, and the user is prompted to input the graph's structure and the source vertex at runtime.

Features:
Dijkstra's Algorithm: A well-known greedy algorithm used for finding the shortest paths between nodes in a graph.
Adjacency Matrix Representation: The graph is represented as an adjacency matrix, where each element indicates the presence and weight of an edge between vertices.
User Input: The program prompts the user to enter the number of vertices, the adjacency matrix, and the source vertex.
Code Explanation:
minDistance(): Finds the vertex with the minimum distance that has not yet been processed.
dijkstra(): Implements Dijkstra's algorithm to compute the shortest path from the source vertex.
printSolution(): Prints the shortest distance from the source vertex to all other vertices.
Dependencies:
Standard C++ library (iostream, limits.h)

Step-by-Step Procedure for the Dijkstra's Algorithm Program
1. Program Initialization
Includes essential header files:
iostream for input/output operations.
limits.h for INT_MAX, used to represent infinity for initial distances.
Defines the constant V (maximum number of vertices), which is set to 9. This can be adjusted as needed.
2. Defining Helper Functions
a) minDistance()
Input:
An array dist[] holding the shortest distances from the source vertex to all other vertices.
A boolean array sptSet[] that tracks whether a vertex is included in the shortest path tree.
The number of vertices.
Output:
Returns the index of the vertex that has the minimum distance and is not yet processed.
How it works:
Iterates over all vertices, checking for the smallest value in dist[] that is not part of the sptSet[] (i.e., has not been finalized).
b) printSolution()
Input:

An array dist[] with shortest distances from the source vertex.
The number of vertices.
Output:

Prints the final shortest distances from the source vertex to all other vertices.
How it works:

It loops through the dist[] array and prints the vertex number along with its corresponding distance from the source.
3. Dijkstra's Algorithm (dijkstra())
Input:

A 2D graph[][] representing the adjacency matrix of the graph.
The source vertex src.
The total number of vertices vertices.
Output:

Calculates and prints the shortest distances from the source vertex to all other vertices.
How it works:

Initializes two arrays:

dist[]: Holds the shortest distances. All distances are initially set to infinity (INT_MAX), except the source vertex, which is set to 0.
sptSet[]: A boolean array where false means the vertex has not been processed yet.
Repeats for vertices-1 times:

Selects the vertex u with the smallest distance using the minDistance() function.
Marks this vertex as processed by setting sptSet[u] = true.
Updates the distances of all adjacent vertices v of the selected vertex u:
If the vertex v has not been processed, and the total distance through u is smaller than the current value of dist[v], the distance is updated.
Calls printSolution() to display the final shortest distances.

4. Main Function (main())
Input:

Prompts the user to enter:
The number of vertices in the graph.
The adjacency matrix, where the user enters edge weights for each pair of vertices. If no edge exists, the user enters 0.
The source vertex from which to calculate shortest paths.
Output:

Runs Dijkstra's algorithm on the input graph and displays the shortest paths from the source vertex.
How it works:

Initializes the graph[][] adjacency matrix based on user input.
Reads the number of vertices and fills the adjacency matrix based on the edges provided.
Calls the dijkstra() function to calculate and print the shortest distances.
