#include <iostream>
using namespace std;

void func(int i ,int n){
    if(i > n){
        return ;
    }
    func(i+1 , n);
    cout<<i<<endl;
}

int main(){
    int n = 5;
    int i = 1;
    func(i , n );
    return 0;
}