#include <iostream>
using namespace std;

void permutations(string ans  , string original){
    if(original.length() == 1){
        ans = ans + original[0];
        cout<<ans<<endl;
        return ;
    }
     for(int  i = 0 ; i < original.length() ; i++){
        string res =  ans + original[i];
        string remaining = original.substr(0, i) + original.substr(i + 1);
        permutations(res, remaining);
     }
}

int main(){
    string ans = "";
    string original = "abc";
    permutations(ans , original);
}