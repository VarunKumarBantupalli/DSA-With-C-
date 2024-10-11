#include <iostream>
using namespace std;

void gcd(int x ,int  y ){
    if(y == 0){
        cout<<x<<endl;
    }
    int z = x%y;

    gcd(y , z);
}

int main(){
    gcd(24 , 60);
}