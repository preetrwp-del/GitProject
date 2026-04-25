#include <iostream>
#include <vector>
using namespace std;

// Recursive DFS function
void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

// Main function
int main() {
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(vertices);      // Adjacency list
    vector<bool> visited(vertices, false); // Visited array

    // Input edges
    cout << "Enter edges (u v) for undirected graph:" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Comment this line for directed graph
    }

    int startNode;
    cout << "Enter starting node for DFS: ";
    cin >> startNode;

    cout << "DFS traversal starting from node " << startNode << ": ";
    dfs(startNode, adj, visited);

    cout << endl;
    return 0;
}
