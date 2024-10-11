#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    stack<char> sthack;
    string s = "((()))";
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == '('){
            sthack.push('(');
            i++;
        }
        if(s[i]==')'){
             if(sthack.size()==0 ){
            cout<<"imbalanced brackets";
            break;
        }
        else {
         sthack.pop();
        }
            i++;
        }
    }
    if(sthack.size()==0){
        cout<<"these are balanced curves";
    }
    else{
           cout<<"these are not balanced curves";
    }
    
}