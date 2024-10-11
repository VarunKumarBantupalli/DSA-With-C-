#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr{1,2,2,2,3,3,3,3,4,4,4,6,6,6,7};
    int n = arr.size();
    int start = 0;
    int end = n-1;
    int target = 3;
    while(start <= end){
         int mid = start + (end - start)/2;
        
        if(arr[mid] == target){
            if(arr[mid-1] == target){
                end = mid-1;
            }
            else{
                cout<<"the first occurence is:"<<mid<<endl;
                break;
            }
        }
        else if(arr[mid] < target)start = mid+1;

        else end = mid-1;
         
    }
    
}