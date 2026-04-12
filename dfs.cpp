#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";   // Print the node

    // Visit all adjacent nodes
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int n = 5;  // number of nodes
    vector<vector<int>> adj(n);

    // Example graph (undirected)
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0};
    adj[3] = {1};
    adj[4] = {1};

    vector<bool> visited(n, false);

    cout << "DFS Traversal starting from node 0: ";
    dfs(0, adj, visited);

    return 0;
}