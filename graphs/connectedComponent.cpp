#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

int v;
vector<list<int>> graph;

void dfs(int node , unordered_set <int> &visited){
    visited.insert(node);
    for(auto  neighbor : graph[node]){
        if(!visited.count(neighbor)){
            dfs(neighbor, visited);
        } 
    }
       
}

void addEdge(int src ,int des , bool bi_dir){
    graph[src].push_back(des);

    if(bi_dir){
    graph[des].push_back(src);      
    }
}


int connected_component(){
    int result = 0;
    unordered_set <int> visited ;
    for(int i = 0 ; i < v ;i++){
        if(visited.count(i) == 0){
            dfs(i , visited);
            result++;
        }       
    }
    return result;
}


int main(){
    
    cout<<"enter no.of vertices:";
    cin>>v;

graph.resize(v,list<int>());


    int e;
    cout<<"enter no.of edges:";
    cin>>e;

    while(e--){
        int s,d;
        cout<<"enter source and destination of edge:";
        cin>>s;
        cin>>d;
        addEdge(s,d,true);
    }
    cout<<connected_component();

    

    return 0;
}