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
