#include <iostream>
#include <vector>
using namespace std;

int main(){
    int size ;
    cout<<"enter the size"<<endl;
    cin>>size;
     int n = size;

    vector<int> arr(size);

    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    
    int product = 1;

    vector<int> pre(size);

    pre[0] = arr[0];

    for(int i = 1 ;i< n ;i++){
        pre[i] = pre[i-1] * arr[i];
    } 
 
    int maxi = pre[2];

    vector<int> ans = {0,1,2};
    int j = 0;
    for(int i = 3 ; i< n ;i++){
         int currPro = pre[i+1]/arr[j] ;
         j++;
         if(currPro  > maxi){
            ans[0] = i-1;
            ans[1] = i;
            ans[2] = i+1;
         }
    }

    for(int i = 0 ; i < 3 ;i++){
        ans[i] = arr[ans[i]];
    }
    cout<<"the required triplet:"<<endl;
    for(int i = 0 ; i < ans.size() ;i++){
        cout<<ans[i]<<" ";
    }

    
}