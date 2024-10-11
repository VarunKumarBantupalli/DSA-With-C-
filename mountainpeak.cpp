#include <iostream>
using namespace std;
int mountainpeak(int arr[] , int size );
int main(){
    int  size ;
    cout<<"enter the size of the array :";
    cin >> size ;
    int arr [size];
    cout<<"enter the elements of the array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans =  mountainpeak( arr,size );
    cout <<"the index of the peak element is "<<ans <<endl;

}
int mountainpeak(int arr[] , int size ){
    int start = 0 ;
    int end =  size -1 ;
    int mid = start + (end - start )/2;
    while (start <end )
    {
    if (arr[mid] < arr[mid+1]){
        start = mid+1 ; 

    }
    else {
        mid = end ;
    }
    mid = start + (end - start )/2;
     return start;
    }
}