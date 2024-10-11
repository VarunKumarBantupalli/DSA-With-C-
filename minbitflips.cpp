#include <iostream>
using namespace std;
int helper(int n){
    int count = 0;
   while(n > 0 ){
    n = n & (n-1);
    count++;  
   }
   return count;
}
int main(){
    int x = 23;
    int  y = 31;
    int z = x ^ y ;
    cout<<helper(z)<<endl;
    return 0;
}