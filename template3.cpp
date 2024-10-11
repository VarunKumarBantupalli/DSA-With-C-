#include <iostream>
using namespace std;

template<class  T1 = int ,class T2 = float , class T3 = char>
class result{
public :
T1 a;
T2 b;
T3 c;
result(T1 x ,T2 y, T3 z){
    a = x;
    b = y;
    c = z;
}
void displayData(){
    cout<<"roll.no:  "<<a<<endl;
    cout<<"attendance percentage:   "<<b<<endl;
    cout<<"grade in the semester: "<<c<<endl;
}
};
int main(){
    result<>varun(10,94.3f,'a');
    result<int ,int ,char>tarun(20,40,'d');
    varun.displayData();
    tarun.displayData();
    return 0;
}
