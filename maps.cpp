#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marksmap;
    marksmap["hari"] = 99;
    marksmap["harry"] = 90;
    marksmap["harish"] = 89;
    marksmap["harishit"] = 69;
    marksmap["harley"] = 79;
    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << endl
             << (*iter).second;
    }
    return 0;
}
