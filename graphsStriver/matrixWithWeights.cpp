#include <iostream>
using namespace std;
int main(){
    int n , m ;
    cin>>n>>m;
    int arr[n+1][m+1];

    for(int i = 0 ; i < m ; i++){
        int u , v ,wt;
        cin>>u>>v>>wt;
        arr[u][v] = wt;
        arr[v][u] = wt;
    }
}