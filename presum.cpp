#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    for(int  i = 1 ; i <nums.size() ;i++){
        nums[i] += nums[i-1];      
    }
    for(int  i = 0 ; i < nums.size() ; i++){
        if(2*nums[i] == nums[nums.size()-1]){
            cout<<"true";
        }
    }
    cout<<"false";
    return 0;
}