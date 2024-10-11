#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int n = 8;
    queue<int> q;
    vector<int> arr(n);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    
    for(int i = 0 ; i < n ; i = i+2){
        arr[i] = q.front();
        q.pop();
    }
    for(int i = 1 ; i < n ; i = i+2){
        arr[i] = q.front();
        q.pop();
    }
    for( int i = 0 ; i< arr.size() ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}