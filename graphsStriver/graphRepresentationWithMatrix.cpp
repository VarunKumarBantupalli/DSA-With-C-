#include <iostream>
using namespace std;

int main(){
    int n , m ;
    cin>>n,m ;
    int arr[n+1][m+1];
    for(int i = 0 ; i < m ;i++){
        int u , v;
        cin>>u,v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    return 0;
}