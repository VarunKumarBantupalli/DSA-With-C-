#include <iostream>
using namespace std;

 bool ispalindrome(string s , int  i , int j){
    if( i > j ){
        return true;
    }
    if(s[i] == s[j]){
        return ispalindrome(s , i+1  , j -1);
    }
    else if(s[i] != s[j]){
        return 0;
    }
 }

int main(){
    string s = "madam";
    int n =  s.size()-1 ;
    cout<<ispalindrome(s ,0,n);
}