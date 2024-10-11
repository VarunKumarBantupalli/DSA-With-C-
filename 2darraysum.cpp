#include <iostream>
using namespace std;
int main()
{
    cout<<"enter the elemnets of the array :"<<endl;
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "the entered elements are :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    int sum = 0;
    cout << "the sum of each row is :" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum <<" "<<endl;
    }
    cout << "the sum of each column is :" << endl;
     int sum2 = 0 ; 
    for (int i = 0; i< 3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum2 += arr[j][i];
           
        }
         cout<<sum2 <<" "<<endl;
     sum2= 0;
        
    }
    return 0 ; 
}