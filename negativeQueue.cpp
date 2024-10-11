#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    queue<int>q;
    vector<int>v;
    v.push_back(0);
    v.push_back(-1);
    v.push_back(-2);
    v.push_back(3);   
    v.push_back(4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(7);
    v.push_back(-8);
    for(int  i = 0 ; i < v.size() ;i++){
        if(v[i] < 0){
            q.push(i);
        }
    }
    int k = 3 ;
    vector<int>ans;
    for(int  i = 0 ; i < v.size()-k+1 ;i++){

       while(!q.empty() && q.front()<i){
        q.pop();
       }

        if(!q.empty() && q.front() < i+k){
            ans.push_back(v[q.front()]);
        }
        else{
            ans.push_back(0);
        }

    }
    for(int  i = 0 ; i < ans.size() ;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
    }