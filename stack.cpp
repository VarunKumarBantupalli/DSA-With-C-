#include <iostream>
#include <stack>
using namespace std;
void display(stack<int> s){
    if(s.empty()){
        return ;
    }
    cout<<s.top()<<endl;
    s.pop();
    display(s);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    display(s);
    return 0;
}