#include <iostream>
using namespace std;

void funcrev (int arr[] , int i ,int n){
    if(i >= n){
        return ;
    }
    swap(arr[i] ,arr[n]);
    funcrev( arr ,  i+1 , n-1);
}

int main(){
    int arr[5] = {1 , 2 ,3 ,4,5};
    funcrev( arr ,  0 , 4);
    for(int  i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}