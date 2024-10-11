#include <iostream>
using namespace std;
int main(){

   int arr[] = {5 ,0 ,1 ,2 ,0 , 0 ,4,0 ,3};
   int n = sizeof(arr)/sizeof(arr[0]);
   for(int i = 0 ; i < n ; i++){
    for(int  j = i+1 ; j < n-i  ; j++){
        if(arr[j] == 0){
            swap(arr[j] ,arr[j+1]);
        }
    }
   }

   for(int  i= 0 ; i < n ; i++){
    cout<<arr[i] << "  ";
   }





    return  0;
}