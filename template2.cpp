#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class marks
{
public :
    T1 maths;
    T2 physics;
    T3 chemistry;
    float result;


    marks(T1 a, T2 b, T3 c)
    { 
        maths = a;
        physics = b;
        chemistry = c;
          result = (maths + physics + chemistry) / 3;
    }

    void display()
    {
        cout << "the result of the student :" << result << "%" << endl;
    }
};
int main()
{
    marks<int, int, float> varun(99, 45, 89.999);

    varun.display();
}
