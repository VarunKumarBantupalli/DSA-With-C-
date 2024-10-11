#include <iostream>
using namespace std;

int pow(int x,int n){
     
     if (n==0) return 1;
   int  ans = pow(x ,n/2);
    if(n%2== 0){
        
       return ans * ans ;
    }
    

  return ans * ans*x  ;
    
}


int main(){
    int x = pow(3,6);

cout<<x;
   return 0;
}

