#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
#include <queue>
using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;
int v;

void addEdge(int src, int des, bool bi_dir = true) {
    graph[src].push_back(des);

    if (bi_dir) {
        graph[des].push_back(src);
    }
}

void bfs(int src, vector<int>& dist) {
    queue<int> q;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    q.push(src);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto neighbour : graph[curr]) {
            if (!visited.count(neighbour)) {
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }

    // Display distances from the source vertex
    for (int i = 0; i < v; i++) {
        cout << "Distance from " << src << " to " << i << " is: " << dist[i] << endl;
    }
}  

int main() {
    cout << "Enter the number of vertices: ";
    cin >> v;
    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    visited.clear();
    graph.resize(v, list<int>());

    while (e--) {
        int s, d;
        cout << "Enter the source and destination: ";
        cin >> s >> d;
        addEdge(s, d);
    }

    int x;
    cout << "Enter the starting vertex for BFS: ";
    cin >> x;

    vector<int> dist;
    bfs(x, dist);

    return 0;
}
