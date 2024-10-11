#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout  << v[i]<<"     ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec;
    int size;
    int element;
    cout << "enter the size:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element that need to be added"<<endl;
        cin >> element;
        vec.push_back(element);
    }
    vector<int>::iterator insert = vec.end();
    vec.insert(insert, 5, 69);

    display(vec);
    return 0;
}