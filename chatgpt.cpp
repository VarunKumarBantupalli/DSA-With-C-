#include <iostream>
using namespace std;

class details {
private:
    int id, money, assets;

public:
    int nameID;
    int rollNo;

    void setData(int a, int b, int c) {
        id = a;
        money = b;
        assets = c;
    }

    void getData() {
        cout << "the value of id is: " << id << endl;
        cout << "the value of money is: " << money << endl;
        cout << "the value of assets is: " << assets << endl;
        cout << "the value of nameID is: " << nameID << endl;
        cout << "the value of rollNo is: " << rollNo << endl;
    }
};

int main() {
    details student;

    student.setData(100, 1000, 30);
    student.nameID = 23;
    student.rollNo = 69;
    student.getData();

    return 0;
}
