#include <iostream>
using namespace std;
 bool ifprime(int n){
    if (n<1){
        return false;
    }
    for (int i = 2; i<n; i++){
        if (n % i == 0 ){
            return false ;
        }
    }
    return true ;
 }
 int main(){
    int n ;
    cin>>n;
    int count = 0;
    for (int i = 2;i<n; i++){
        if (ifprime(i)){
            count++;
        }
    }
    cout<<count;

    return  0;
 }