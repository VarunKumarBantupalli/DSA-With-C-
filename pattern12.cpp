#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n;
    char c = 'A';

    cin >> n;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j <= i; j++)
        {

            cout << (c);
        }

        cout << endl;
        c = c + 1;
    }
}