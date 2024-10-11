#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

vector <vector<int> > result ;
vector< list<int> > graph ;
unordered_set <int> visited ;

void addEdge(int src ,int des  , bool bi_dir = true){
    
    graph[src].push_back(des);
    
    if(bi_dir){
    graph[des].push_back(src);       
    }
}

void dfs(int curr ,int end , vector<int>& path){
    if(curr == end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return ;
    }
    visited.insert(curr);
    path.push_back(curr);
    for(auto neighbour : graph[curr]){
        if(!visited.count(neighbour)){
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return ;
}

void allpath(int src ,int des){
    vector <int> v;
    dfs(src,des ,v);
}

int main(){
    int v;
    cout<<"enter the vertices"<<endl;
    cin>>v;
    int e ; 
    cout<<"enter the edges"<<endl;
    cin>>e;

    graph.resize(v,list<int>());
    visited.clear();

    while(e--){
        int s;
        int d;
        cout<<"enter the source and destination:";
        cin>>s>>d;
        addEdge(s,d);
    }
    int x,y;
    cout<<"enter the two nodes to all the paths between them:";
    cin>>x>>y;

    allpath(x,y);

    for(auto path : result){
        for(auto ele : path ){
            cout<<ele <<"->";
        }
        cout<<"end"<<endl;
    }


    return 0;
}