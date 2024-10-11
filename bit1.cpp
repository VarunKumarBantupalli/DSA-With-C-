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
int helper(int n){
    int count = brian(n);  
        if(count==1){
            return n;
            
        }
  
       n = n << 1;
      return  helper(n);
    }


int main(){
    int x = 100;
   cout<<helper(100)<<endl;
    return 0;
}