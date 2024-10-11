#include <iostream>
using namespace std;
 typedef struct employee
{
    int ID;
    char grade;
    float salary;
}ep;
int main()
{

     ep hari;
     
    hari.ID = 79;
    hari.grade = 'A';
    hari.salary = 45000.00f;

    cout << "the ID" << hari.ID << endl;
    cout << "the grade" << hari.grade << endl;
    cout << "the salary" << hari.salary << endl;

    return 0;
}