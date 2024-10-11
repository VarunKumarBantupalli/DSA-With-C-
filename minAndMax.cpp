#include <iostream>
using namespace std;
int  findMax(int arr[] ,int size){
    int max  =arr[0] ;
    int i ;
for (int i = 1; i < size; i++) {
    if (arr[i] > max){
        max = arr[i];
    }
}
    return  max ;
}
int  findMin(int arr[] ,int size){
    int mini  =arr[0] ;
    int i ;
for (int i = 1; i < size; i++) {
    mini = min(mini,arr[i]);
    }

    return  mini ;
}

int main(){
    int size ;
        cout<<"enter the size of the array"<<endl;
    cin>>size ;

      int arr[100];
      cout<<"enter the elements of the array !!!"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
  
    int x  = findMax(arr,size);
    int y  = findMin(arr,size);
cout<<"the max value is "<<x<<endl;
cout<<"the min value is "<<y<<endl;
    return  0;
}