#include <iostream>
using namespace std;
class heap{
    public:
    int size ;
    int arr[100];
    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        
    }

};
int main(){

}
