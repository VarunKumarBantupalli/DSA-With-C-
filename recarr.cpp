#include <iostream>
using namespace std;
int trav (int arr[] , int  i  ,int maxi){
    if(i == 5){
        return maxi;
    }
    maxi = max(maxi , arr[i]);
    
    trav(arr , i+1 ,maxi);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int  i = 0 ;
    int maxi = 0;
    int x = trav(arr , i ,maxi);
    cout<<"the max number among the array is"<<x<<endl;
}