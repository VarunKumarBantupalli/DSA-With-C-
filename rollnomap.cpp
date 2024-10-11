#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> rollnomap;
    rollnomap["varun"] = 99;
    rollnomap["tarun"] = 89;
    rollnomap["charan"] = 79;
    rollnomap["larun"] = 69;
    map<string, int>::iterator iter;
    for (iter = rollnomap.begin(); iter != rollnomap.end(); iter++)
    {

        cout << (*iter).first << endl
             << (*iter).second;
    }
    return 0;
}