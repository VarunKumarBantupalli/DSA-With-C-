#include <iostream>
using namespace std;
template <class T1,class T2>
class average {
public :
T1 a;
T2 b;
float avg;
float funcavg(a,b){
avg = (a+b)/2;
return avg;
}
};
int main(){
   average <float ,float> marks;
    float x = marks.funcavg(40,60);
    cout<<"the average of the given numbers  is "<<x<<endl;
    return 0;
}