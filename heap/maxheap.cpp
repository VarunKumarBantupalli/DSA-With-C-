#include <iostream>
#include <queue>

using namespace std;
int main(){
    priority_queue<int , vector<int> , greater<int> > pq;
    
    pq.push(10);
    pq.push(23);
    pq.push(-1);
    pq.push(6);
    

    cout<<pq.top()<<endl;
    return 0;
}