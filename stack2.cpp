
//removing of consectives
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s = "aaabbcdddffg";
    stack<char>sthack;
    int i=0;
    while(s[i] != '\0'){
        if(sthack.size()==0 ||sthack.top() != s[i]){
            sthack.push(s[i]);
            i++;
        }
        else {
            i++;
        }
    }
    string ans = "";
    while(sthack.size() != 0){
        ans = sthack.top() + ans;
        sthack.pop();
    }
    cout<<ans<<endl;
    
    
    
}