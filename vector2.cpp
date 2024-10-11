#include <iostream>
#include <vector>
using namespace std;
void show_roll(vector<float> &y)
{
    for (int i = 0; i < y.size(); i++)
    {
        cout<<"the selected rolls are:"<<y[i]<<" "<<endl;

    }
    cout<<endl;
}
int main(){
    vector<float>v1;
    int size ;
    int element;
    cout <<"enter the size of the element:";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element to add in the vector: "<<endl;
        cin>>element;

    }
    show_roll(v1);
    
}