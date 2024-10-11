#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<int>> graph;

void addEdge(int src ,int des , bool bi_dir){
    graph[src].push_back(des);

    if(bi_dir){
    graph[des].push_back(src);      
    }
}

void display(){

    for(int i = 0 ; i < graph.size() ; i++){
        cout<<i<<" -> ";
        for(int ele : graph[i]){
            cout<<ele <<" , ";
        }
        cout<<endl;
    }
}

int main(){
    int v;
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
    display();

    

    return 0;
}