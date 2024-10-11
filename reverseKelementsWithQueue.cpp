#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    stack<int>st;
    int k = 3 ;
    while(k--){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(!st.empty()){
        int x  = st.top();
        q.push(x);
        st.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}