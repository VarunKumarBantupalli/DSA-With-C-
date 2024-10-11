#include <iostream>
using namespace std;
template <class T>
void swapfunc(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "enter the numbers that need to be swapped" << endl;
    int x, y;
    cin >> x >> y;
    cout << "before swapping :" << endl;
    cout << "value of x: " << x << endl;
    cout << "value of y: " << y << endl;
    swap(x, y);
    cout << "after swapping:" << endl;
    cout << "value of x: " << x << endl;
    cout << "value of y: " << y << endl;

    return 0;
}