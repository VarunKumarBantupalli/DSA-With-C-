#include <iostream>
using namespace std;
void heapify(int i, int arr[], int n) {
  int largest = i; 
  int left = 2 * i + 1;  // left = 2*i + 1
  int right = 2 * i + 2; // right = 2*i + 2

  // If left child is larger than root
  if (left < n && arr[left] > arr[largest])
    largest = left;

  // If right child is larger than    largest so far

  if (right < n && arr[right] > arr[largest])
    largest = right;

  // If largest is not  the root  

  if (largest != i) {
    swap(arr[i], arr[largest]);

    // Recursively heapify the affected sub-tree
    heapify(largest,arr, n);
  }
}
int main(){
    int arr[] = {-1,10,2,14,11,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = n/2 ; i>=1 ;i--){
        heapify(i,arr,n);
    }
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}