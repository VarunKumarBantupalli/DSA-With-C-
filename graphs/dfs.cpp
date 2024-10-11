#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector<list<int>>graph ;
unordered_set<int>visited;

void addEdge(int src ,int des ,bool bi_dir = true){
    graph[src].push_back(des);

    if(bi_dir){
        graph[des].push_back(src);
    }
}

bool dfs(int curr ,int desc){
    if(curr == desc)return true;

    visited.insert(curr);
    
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            bool result = dfs(neighbour,desc);
            if(result) return true;
        }
             
    }
    return false;
}

bool anyPath(int x ,int y){
    return dfs(x,y);
}

int main(){
    int v;
    cout<<"enter no.of vertices:";
    cin>>v;
    int e ;
    cout<<"enter no.of edges:";
    cin>>e;

    visited.clear();
    graph.resize(v,list<int>());

    while(e--){
        int s;
        int d;
        cout<<"enter the source and destination:";
        cin>>s>>d;
        addEdge(s,d);
    }
    int x,y;
    cout<<"enter the two nodes to check the path between them:";
    cin>>x>>y;

    if(anyPath(x,y)){
        cout<<"there is direct path existed between them";
    }
    else{
        cout<<"there is no direct path existed between them "; 
    }


    return 0;
}