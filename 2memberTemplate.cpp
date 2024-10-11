#include <iostream>
using namespace std;
template <class T>
class selectors{
public :
T a,b,c,d,e;
selectors(T x){
    a=x;
    b=a+1;
    c=b+1;
    d=c+1;
    e=x+5;
}
void displayData();
};
template <class T>
void selectors <T> ::displayData()
    {
    cout<<a     <<b     <<c     <<d     <<e     <<endl;
}
int main(){
    selectors<int>cricket(10);
    cricket.displayData();

return 0;
}
