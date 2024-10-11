#include <iostream>
#include <string>
#include <string>
#include <algorithm>


using namespace std;

int main(){

string s = "12345678";

int n = s.length();

 reverse(s.begin(),s.begin()+(n/2));

cout<<s;


    return 0 ;
}