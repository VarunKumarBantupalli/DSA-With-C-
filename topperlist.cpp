#include <iostream>
#include <list>
using namespace std;
void display(list<int> &topper)
{
    list<int>::iterator ranks;
    for (ranks = topper.begin(); ranks != topper.end(); ranks++)
    {

        cout << *ranks<< "      ";
    }
    cout << endl;
}
int main()
{
    list<int> markslist;
    markslist.push_back(99);
    markslist.push_back(97);
    markslist.push_back(955);
    markslist.push_back(59);
    markslist.push_back(69);
    markslist.push_back(90);
    markslist.sort();
    display(markslist);
}