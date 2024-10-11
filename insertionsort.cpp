#include <iostream>
#include <algorithm>
using namespace std;
int insertionsort(int arr[], int size);
int main()
{

    int size;
    cout << "enter the size of the array :" << endl;
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, size);
    cout << "the sorted elemnts are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int insertionsort(int arr[], int size)
{
    for (int i = 1; i < size ; i++){
        int currentelement = arr[i] ;
        int j =i-1 ;
        while (arr[j] >= currentelement && j >= 0 ){
            arr[j+1]  =  arr[j];
            j--;
        }
        arr[j+1] = currentelement;
    }
}
