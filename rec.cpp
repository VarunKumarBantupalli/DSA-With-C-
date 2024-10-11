#include <iostream>
using namespace std;

// void prints(int i , int n )
// {
//       if( i > n  ){
//         return ;
//       }
//       cout<<"varun"<<endl;
//       prints(i+1 , n);
// }

void prints(int n ){
    if(n == 0 ){
        return ;

    }
    cout<<"varun"<<endl;
    prints(n-1);
}
int main()
{
    int i = 1 ;
    int n = 5 ;
    prints( n );
    return 0 ; 
}