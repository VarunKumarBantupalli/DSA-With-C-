#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> n;
        cin >> m;
        int p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            sort(p, p + n);
            int sum = 0;
            int j = n - 1;
            while (j >= 0)
            {
                sum = sum + p[i];
                if (sum >= m)
                {

                    break;
                }
                j--;
            }
            cout << n - j << endl;
        }
        cout << -1 << endl;
    }

    return 0;
}
