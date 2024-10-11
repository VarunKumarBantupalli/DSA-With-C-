#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    vector<int> v{12,2,3,4,5,67,54};
    priority_queue<int> maxi;
  int k = 1;

for(int i = 0 ; i < v.size();i++){
    maxi.push(v[i]);

    if(maxi.size() > k )maxi.pop();
}


    cout<<maxi.top()<<endl;
    return 0;
}