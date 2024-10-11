#include <iostream>

#include <vector>
using namespace std;


bool dfs(int src ,int parent ,vector<int>& visited , vector<int> adj[]){
    visited[src] = 1;

    for(auto it  : adj[src]){

        if(visited[it] == 0){
           if(dfs(it , src ,visited ,adj))  return true;
        }
        else if(parent != it){
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> visited(n + 1, 0);  
    vector<int> adj[n + 1];  

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
                if (dfs(1,-1,visited,adj)) {
                    cout << "There is a cycle in the graph";
                }
        }
    }
        cout << "There is no cycle in the graph";
    return 0;
}
