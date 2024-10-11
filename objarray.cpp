#include <iostream>
using namespace std;
class shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter = 1;

public:
    void setData()
    {
        cout << "enter the Id and price of the item:" << endl;
        cin >> itemID[counter];
        cin >> itemPrice[counter];
        counter++;
    }
    void getData()
    {
        for (int i = 1; i < counter; i++)
        {
            cout << "the price of the item is:" << itemPrice[i] << endl
                 << "with the itemID: " << itemID[i] << endl;
        }
    }
};

int main()
{
    shop jmart;
    jmart.setData();
    jmart.getData();
    return 0;
}
