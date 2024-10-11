#include <iostream>
using namespace std;

int greatest_number(int a,int b,int c,int d){
    if(a>b&&a>c&&a>d){
        return a;
        
    }
    else if(b>a&&b>c&&b>d){
        return b;
        
    }
    else if(c>a&&c>b&&c>d){
        return c;
        
    }
    else{
        return d;
    }
    cout<<greatest_number( a,  b,  c,  d);
    }
int  main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  greatest_number(a,b,c,d );
  cout<<greatest_number( a,  b,  c,  d);
}

