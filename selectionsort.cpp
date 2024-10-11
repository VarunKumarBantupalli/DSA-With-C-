#include <bits/stdc++.h>
using namespace std;
int selectionsort(int arr[], int size);
int main()
{
    int size;
    cout << "enter the szie of the array :" << endl;
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr, size);
    cout << "the sorted elemnts are :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int selectionsort(int arr[], int size)
{

    for (int i = 0; i < size ; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[i], arr[minindex]);
    }
}