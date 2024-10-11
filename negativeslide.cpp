#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {2,-3,4,4,-7,-1,4,-2,6};
    vector<int> ans;
    int  p = -1;
    for(int i = 0 ; i < 4 ; i++){
        if(arr[i] < 0){
            p = i ;          
            break;
        }
    }
    ans.push_back(arr[p]);
    int  i = 1 ;
    int  j = 4 ;
    int  n = arr.size();
    while( j < n){
        if(p >=i){
            ans[i] = arr[p];
        }
        else{
            for( p = i ; p <= j ; p++){
                if(arr[p] < 0 ){
                    break;                
                }
            }
            ans[i] = arr[p];
        }
        i++;
        j++;
    }
    for(int  i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}