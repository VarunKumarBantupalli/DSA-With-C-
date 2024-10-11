#include <iostream>
using namespace std;
int main(){
    int result = -1;
    int arr[]={2,3,4,5,6,5,3,2,4};
    for(int  i = 0 ; i < 8 ;i++){
        result = arr[i] ^ arr[i+1];
    }
    cout<<result<<endl;
}