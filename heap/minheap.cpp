#include <iostream>
#include <queue>

using namespace std;
int main(){

    priority_queue<int> maxi;
    maxi.push(10);
    maxi.push(23);
    maxi.push(-1);
    maxi.push(6);


    cout<<maxi.top()<<endl;
    return 0;
}