#include <iostream>
using namespace std;

// void funcsum(int  i , int  n ,int sum){
    
//   if(i > n ){
//     cout<<sum<<endl;
//     return ;
//   }
//   sum += i ;
//   funcsum(i+1 , n  ,sum);

// }

int func(int n ){
    if(n==0){
        return 0;
    }
    return n + func(n-1);
}
int main(){
//  int  i = 1 ,n =3 ;
//  int sum =0 ; 

// funcsum(i , n , sum);

int x = func(5);
cout<<x<<endl;

return 0;
}