#include <iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    int k=0;
    cin>>n;
    for(i=0;i<=n;i++){
        for(j =0;j<i;j++){
                k =k+1;
            cout<<(k);
        }
        cout<<endl;
    }
}