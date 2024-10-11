#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
   long long a;
    long long age ;
   char ant;
   float percentage;
   double shares ;
   cin>>a>>age>>ant>>percentage>>shares;
   cout<<a<<endl<<age<<endl<<ant<<endl;
  cout<<fixed<<setprecision(3)<<percentage<<endl;
  cout<<fixed<<setprecision(9)<<shares<<endl;
    return 0;
}


