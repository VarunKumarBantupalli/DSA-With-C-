#include <iostream>
using namespace std;
int getpivot(int arr[] , int size );
int main(){
    int  size ;
    cout<<"enter the size of the array :"<<endl;
    cin >> size ;
    int arr [size];
    cout<<"enter the elements of the array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans =  getpivot( arr,size );
    cout <<"the pivot element is "<<ans <<endl;

}
int getpivot(int arr[] , int size ){
    int start = 0 ;
    int end =  size -1 ;
    int mid = start + (end - start )/2;
    while (start <end )
    {
    if (arr[mid] >= arr[0]){
        start = mid+1 ; 

    }
    else {
        mid = end ;
    }
    mid = start + (end - start )/2;
     
    }
}