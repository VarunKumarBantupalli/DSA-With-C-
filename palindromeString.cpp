#include <bits/stdc++.h>
using namespace std;
bool palindromecheck(char name [] , int n );
int main(){
    int n ;
    cout<<"enter the size of the name"<<endl;
    cin>>n;
    char name [n];
    cout<<"enter the name :"<<endl;
    cin>>name;
    if(palindromecheck(name ,n )){
        cout<<"the given name is a palindrome"<<endl;
    }
    else {
         cout<<"the given name is a not palindrome"<<endl;
    }
}
 bool palindromecheck (char name[] ,int n ){
    int start  = 0 ;
    int end = n -1 ;
    while (start <= end ){
        if (name[start] == name[end]){
            
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true ;
 }