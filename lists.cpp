#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout <<*iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(11);
    list1.push_back(14);
    list1.push_back(61);
    list1.push_back(178);
    list1.sort();
    list1.pop_back();
    display(list1);
    list1.reverse();
    display(list1);
}