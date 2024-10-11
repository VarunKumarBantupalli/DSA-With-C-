#include <bits/stdc++.h>
using namespace std ;
int main(){
    int  t;
    cin>> t;
    while (t--){
        int n ;
        cin>> n ;
        bool voya = false ; ;     
            if( n%3 == 0){
                    voya = false ;
            }
            else {
                voya = true ;
            }
        
        if(voya){
            cout<<"first"<<endl;
        }
        else {
            cout<<"second"<<endl;
        }
    }
    
    return 0 ;
}