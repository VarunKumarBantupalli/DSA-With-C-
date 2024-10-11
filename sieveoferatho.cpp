#include <vector>
#include <iostream>
using namespace std;

class solution  {
    int countprimes (int n){
        int count = 0;
        vector<bool>prime(n+1,true);
        prime[0] = prime[1]= false;
        for (int i =2 ; i < n ;i++){
            if(prime[]){
                count++;
                for (j = 2*i;j < n ; j++){
                    prime [j] = 0;
                }
            }
        }
        return count;
            }
};
int main(){
    int n;
    cin>>n;
    countprimes(n);
    count<<count;
}