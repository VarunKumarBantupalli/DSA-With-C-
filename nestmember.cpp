#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    
    void one_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter the binary number:";
    cin >> s;
}
void binary ::check_binary(void)
{
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "the entered binary number is invalid";
            exit(0);
        }
        }
}
void binary ::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "displaying your binary number:";
    for (size_t i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
   // b.check_binary();
    b.one_compliment();
    b.display();

    return 0;
}