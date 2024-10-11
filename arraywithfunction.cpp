#include <iostream>
using namespace std;

int main()
{
void printArray(int arr[], int size);
    int a[10] = {1, 3, 4, 5, 6};
    
     printArray(a, 10);
    return 0;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}