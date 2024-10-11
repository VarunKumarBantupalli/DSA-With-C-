#include <iostream>
using namespace std;
void binary(string s1 , int n) {
    if(n == 0){
        cout<<s1<<endl;

        return;
    }
    binary(s1+"0" , n-1);
    if(s1[s1.length()-1] != '1'){
       binary(s1+"1" , n-1);
    }
    
}
int main(){
    string s1 = "";
    int n = 3 ;
    binary(s1 , n);
}