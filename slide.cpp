#include <iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,8,4,5,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    int k = 3;
    int j = k;
    int currentSum = 0;
    int maxSum = 0;
    for(int  i= 0 ; i < k;i++){
        currentSum+=arr[i];
    }
    maxSum = currentSum;
      int i = 1 ;
    while(j<n){
        currentSum += arr[j] -arr[i-1];
        maxSum = max(currentSum,maxSum);
        i++;
        j++;
    }
    cout<<maxSum;
    return 0;
}