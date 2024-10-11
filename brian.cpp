#include <iostream>
using namespace std;
int brian(int n){
    int count = 0;
    while(n > 0){
        n = n & (n-1);
        count++;

    }
    return count;
}
int main(){
    cout<<brian(32)<<" ";
    return 0;
}