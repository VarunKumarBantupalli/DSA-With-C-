#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<pair<int,int>>>graph ;

void addEdge(int src , int des , int wt){
     bool bi_dir = true ;

     graph[src].push_back({des,wt});

     if(bi_dir){
     graph[des].push_back({src,wt});
     }
}

void display(){
    for(int i = 0 ; i < graph.size();i++){
        cout<<i <<" -> ";
        for(auto ele : graph[i]){
            cout<<"(" <<ele.first<< " , " << ele.second << " ) " ;
        }
        cout<<endl;
    }

}

int main(){
    int v;
    cout<<"enter no.of vertices:";
    cin>>v;
    int e;
    cout<<"enter no.of edges:";
    cin>>e;

    graph.resize(v,list<pair<int,int>>());

    while(e--){
        int s,d,wt ;
        cout<<"enter the source, destination and weight:";
        cin>>s>>d>>wt;
        addEdge(s,d,wt);
    }
    display();

    return 0;
}