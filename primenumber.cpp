#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "the given number is not prime ";
      
        }
        else
        {
            cout << "the given number is  prime ";
       
        }
           i++;
            exit(0);
       
    }
}