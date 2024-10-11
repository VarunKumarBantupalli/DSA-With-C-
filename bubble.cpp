#include <iostream>
using namespace std;
int main(){
    int arr[] = {1 ,2 ,3 ,4 ,5};

    for(int  i = 1 ; i < 5 ; i++){
        for(int  j = 0 ;  j < 5-1 ; j++){
           if(arr[i] > arr[i+1]){
               swap(arr[i] ,arr[i+1]) ;
           } 
        }
    }
    for(int  i = 0 ; i < 5  ; i++){
        cout<<arr[i]<<" ";
    }
    return  0;
}