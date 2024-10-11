#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr{0,1,2,3,4,5,6,9,12};
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int result = -1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid] != mid){
            result = mid;
            e = mid-1;
        }
        else if(arr[mid] == mid){
          
            s = mid+1;
        }

    }
    cout<<result;
}