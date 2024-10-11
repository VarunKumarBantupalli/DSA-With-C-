#include <iostream>
using namespace std;
void reverse (int arr[], int size){
    int start  = 0 ;
    int end  = size -1 ;
    while (start <= end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    
}
void printArray(int arr[], int size ){
        for (int  i = 0; i < size; i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        cout<<"this is from first "<<endl;
}
int main(){
    int size = 10;
    int arr[10] = {1,23,4,4,5,6,0,7};

    reverse(arr,size);
        printArray(arr,size);
    return 0;
}