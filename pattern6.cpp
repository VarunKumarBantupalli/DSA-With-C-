#include <iostream>
using namespace std;
int main(){
    int i,j;
     int k=0;
    int n;
    cin>>n;
    i = 1;
    while(i<=n){
        j=1;
        while(j<i){
            k++;
            cout<<(k)<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}