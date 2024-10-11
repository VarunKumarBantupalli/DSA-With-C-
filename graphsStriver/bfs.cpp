#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main(){
    int n ,m ;
    cin>>n>>m;
    
    vector<int> adj[n+1];

    for(int i =0 ; i < m ; i++){
        int u ,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int visited[n+1] = {0};
    queue <int> q;
    vector<int>bfs;

    q.push(1);
    visited[1] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        visited[node] = 1;
        bfs.push_back(node);

        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] = 1;
                q.push(it);
            }
        }    
    }
    
    for(auto ele : bfs){
        cout<<ele<<" ";
    }

    
}

