#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number";
    int n;
    cin >> n;


    cout<<fiba(n);
    return 0;
}

int fiba(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fiba(n - 1) + fiba(n - 2);
    }
}