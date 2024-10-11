 #include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
vector<int>v1;
int element, size;
    cout << "enter the size of the vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element to add to this vector" << endl;
        cin >> element;
        v1.push_back(element);
    }

    vector<int>::iterator iter = v1.begin();
    v1.insert(iter+3,5,69);
    cout<<endl;
    display(v1);
    return 0;
}