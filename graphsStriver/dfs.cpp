#include <iostream>
#include <vector>
using namespace std;

vector <int> ls; 

void dfs(int node ,vector<int> adj[] , int visited[]){
      visited[node] = 1;
      ls.push_back(node);

      for(auto it : adj[node]){
        if(!visited[it]){
            visited[it] = 1;
            dfs(it,adj,visited);
        }
      }
}
int main(){
    int n , m ;
    cin>>n>>m;
    
    vector<int> adj[n+1];
    int visited[n+1] = {0};

    for(int i = 0 ; i < m ;i++){
        int u , v ;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
     int start = 1;

     dfs(start ,adj , visited);

     for(auto ele : ls){
        cout<<ele<<" ";
     }

}
