#include <iostream>
#include <algorithm>
using namespace std;
int bubblesort(int arr[] , int size);
int main(){

    int size;
    cout<<"enter the size of the array :" << endl;
    cin>> size;
    int arr[size];
    cout << "enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, size);
    cout << "the sorted elemnts are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}
int bubblesort(int arr[] , int size){

    for (int j = 1 ; j < size - 1 ; j++){
       

    for (int i = 0 ; i < size - i  ; i++ ){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
          
        }
        
        }
    
    }
}
