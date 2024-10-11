#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<unordered_set<int>> graph;

void addEdge(int src, int des) {
    bool bi_dir = true;

    graph[src].insert(des);

    if (bi_dir) {
        graph[des].insert(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto ele : graph[i]) {
            cout << ele << " ";
        }
        cout << endl;
    }
}

int main() {
    int v;
    cout << "Enter the number of vertices: ";
    cin >> v;
    int e;
    cout << "Enter the number of edges: ";
    cin >> e;


    graph.resize(v);

    while (e--) {
        int s, d;
        cout << "Enter the source and destination: ";
        cin >> s >> d;
        addEdge(s, d);
    }
    display();

    return 0;
}
