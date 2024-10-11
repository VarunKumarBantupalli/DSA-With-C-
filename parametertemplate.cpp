#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
public:
    T1 data1;
    T2 data2;
    void display()
    {
        cout << " roll.no :" << data1 << endl
             << "grade:" << data2 << endl;
    }
    myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
};
int main()
{
    myclass<int, char> obj1(1, 'c');
    myclass<int, char> obj2(2, 'a');
    myclass<int, char> obj3(3, 'a');

    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}