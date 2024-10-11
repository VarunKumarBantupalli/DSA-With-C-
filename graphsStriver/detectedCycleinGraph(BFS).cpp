#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool detect(int src, vector<int> adj[], int visited[]) {
    visited[src] = 1;

    queue< pair<int, int> > q;
    q.push({src, -1});

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto neigh : adj[node]) {
            if (!visited[neigh]) {
                visited[neigh] = 1;
                q.push({neigh, node});  // Use q.push instead of queue.push
            } else if (parent != neigh) {
                return true;  // Cycle detected
            }
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[], int visited[]) {
    for (int i = 0; i < v; i++) {
        if (!visited[i]) {
            if (detect(i, adj, visited)) return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> visited(n + 1, 0);  // Use vector for dynamic sizing
    vector<int> adj[n + 1];  // Adjacency list

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (isCycle(n, adj, visited.data())) {
        cout << "There is a cycle in the graph";
    } else {
        cout << "There is no cycle in the graph";
    }

    return 0;
}
