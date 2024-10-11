#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int size, int key);
int main()
{
    int n;
    cout << "enter th size of the array ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the key element :" << endl;
    cin >> key;
    int index = BinarySearch(arr, n, key);
    cout << "the index of the key element is :" << index << endl;
}
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {

            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}