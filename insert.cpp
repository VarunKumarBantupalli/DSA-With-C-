#include <iostream>
using namespace std;
int main(){
    int arr[] = { 5,4 ,2 , 3 ,1 };
    
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int  i = 0 ;  i < 5 ; i++){
        int minidx = i;
        for(int j = i ;  j < 5 ; j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[minidx] , arr[i]);
    }
    for( int it = 0 ; it < 5 ; it++ ){
        cout<<arr[it]<<endl;
    }
    return 0;
}