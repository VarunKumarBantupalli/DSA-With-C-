#include <iostream>
#include <cmath>
using namespace std;
int main(){
  bool powcheck(int n);
 if(powcheck(1024 )){
        cout<<"it is interms of 2 !";
 }
 else{
     cout<<"it is not interms of 2 !";

 }
}
bool powcheck(int n){
    for (int i=0;i<30;i++ ){
            if(n == pow(2,i)){
                return true;
            }
            
    }
}
