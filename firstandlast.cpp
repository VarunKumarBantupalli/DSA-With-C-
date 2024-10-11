#include <bits/stdc++.h>
using namespace std;
int fisrtoccurence(int arr[], int size, int key);
int secondoccurence(int arr[], int size, int key);
int main()
{
    int size;
    cout << "enter th size of the array ";
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the key element :" << endl;
    cin >> key;
    int index1 = fisrtoccurence(arr, size, key);
    int index2 = secondoccurence(arr, size, key);
    cout << "the index of first occurence  key element is :" << index1 << endl;
    cout << "the index of second occurence  key element is :" << index2 << endl;
}
int fisrtoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans1 = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans1 = mid;
            end = mid - 1;
        }
        if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans1;
}
int secondoccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans2 = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans2 = mid;
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans2;
}
