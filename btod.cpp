#include <iostream>
using namespace std;
int main(){
    string s = "100100";
    int n = s.size();
    int result = 0;
    for(int  i = 0 ; i < n ; i++){
        char ch = s[i];
        int num = ch -'0';
        result+=num * (1 << (n-i-1));

    }
    cout<<result;
    return 0;
}