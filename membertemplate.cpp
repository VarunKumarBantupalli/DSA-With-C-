#include <iostream>
using namespace std;
template <class T>
class numbers
{
public:
    T data;
    numbers(T a)
    {
        data = a;
    }
    void displayData();
};
void numbers<class T>::displayData()
{
    cout << "the value in the dataBase: " << data << endl;
}
int main()
{
    numbers<float> varun(12.55);
    cout << varun.data << endl;
    varun.displayData();
}