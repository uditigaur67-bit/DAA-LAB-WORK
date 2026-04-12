#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);   // To keep track of visited nodes
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";  // Print the node

        // Visit all adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
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

    cout << "BFS Traversal starting from node 0: ";
    bfs(0, adj, n);

    return 0;
}