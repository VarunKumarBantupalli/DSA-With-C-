#include <iostream>
using namespace std;
int main(){
    int num = 18;
    string result = "";
    while (num>0)
    {
        if(num%2==0){
            result = "0" + result ;           
        }
        else{
            result = "1" + result ;  
        }
      num/=2 ;
    }
    cout<<result<<" ";
    
    return 0;
}