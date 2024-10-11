#include <iostream>
using namespace std;

class employees
{
private:
    int empid;
    int salary;

public:
    void setData()
    {
        cout << "enter the id of the employee:" << endl;
        cin >> empid;
        cout << "enter the salary of the employee:" << endl;
        cin >> salary;
    }
    void getData()
    {
        cout << "the id of the employee is:" << empid << endl;
        cout << "the salary of the employee is:" << salary << endl;
    }
};
int main()
{
    int n;
    cout << "enter the no.of employees:" << endl;
    cin >> n;
    employees fashbox[n];
    for (int i = 0; i < n; i++)
    {
        fashbox[i].setData();
    }
    for (int i = 0; i < n; i++)
    {
        fashbox[i].getData();
    }

    return 0;
}