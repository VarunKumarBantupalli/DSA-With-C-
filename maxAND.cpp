#include <iostream>
using namespace std;
int main(){
    int arr[] = {12,3,4,1,1,64,6,6,6,13,13,13,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    int ans  = 0 ;
    int maxi =-1;
    for(int  i = 0 ; i < n ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
            count = 1;
        }
        else if(arr[i] == maxi){
            count++;
        }
        ans = max(ans,count);
        
    }
    cout<<ans<<endl;
    return 0;
}