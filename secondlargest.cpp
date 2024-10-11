#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                x = a[i];
            }
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1] && a[i] != x && a[i] < x)
            {
                y = a[i];
            }
        }
        cout << (x + y) << endl;
    }

    return 0;
}
