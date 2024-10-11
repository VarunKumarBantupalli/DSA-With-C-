#include <iostream>
using namespace std;
int main(){
int reverse(int a);
int x =  reverse(345678);

cout<<"the reverse number is:"<<x;

}
     int reverse(int num){
        int digit;
    int ans = 0;

    while (num > 0){

        digit = num % 10;
        ans = ans*10 + digit;
        num = num/10;
    }
    return ans;
    }
