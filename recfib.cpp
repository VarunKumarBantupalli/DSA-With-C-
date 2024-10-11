#include <iostream>
using namespace std;

int fib(int n ){ 
    if ( n <=0 ){
        return 1;
    }
    return fib(n-1) + fib(n-2);

}

int main(){
  int x =   fib(3);
  cout<<x;
    return 0;
}