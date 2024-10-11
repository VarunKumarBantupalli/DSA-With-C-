#include <iostream>
using namespace std;

template <class T >
class vector {
   public :
    T * arr;
    int size ;
    public :
    vector(int m){
        size = m;
        arr = new T [size];
    }
    T dotProduct (vector &v){
        int d = 0;
        for (int i = 0; i < size ; i++)
        {
          d = d + this ->arr[i]*v.arr[i];
        }
        return d;
        
    }
};

int main (){
    vector<float>v1(5);
    v1.arr[0] = 4.1;
    v1.arr[1] = 4.2;
    v1.arr[2] = 4.3;
    v1.arr[3] = 4.4;
    
    vector<float>v2(5);
    v2.arr[0] = 4.;
    v2.arr[1] = 5.99992;
    v2.arr[2] = 6.2;
    v2.arr[3] = 7.2;

    float a = v1.dotProduct(v2);
    cout<<"the dot product of the resultant :"<<endl;
    cout<<a;

    return 0;
}

