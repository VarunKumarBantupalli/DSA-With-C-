#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    vector<int> v{12,2,3,4,5,67,54};
    priority_queue< int , vector<int> , greater<int> > pq;
    vector<int >ans;
  

for(int i = 0 ; i < v.size();i++)pq.push(v[i]);  
     
while(pq.size()){
   ans.push_back(pq.top());
   pq.pop();
}

for(int i = 0 ; i< ans.size() ; i++) cout<<ans[i]<<" ";


    return 0;
}