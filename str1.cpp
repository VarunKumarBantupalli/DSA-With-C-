#include <iostream>

using namespace std;

int main(){
    
int n ;
cout<<"enter the size of the string:\n";
cin>>n;
cin.ignore(); 
int count= 0;
char str[n];
cin.getline(str,n);

for(int i = 0 ; str[i] != '\0' ;i++ ){
    if(str[i] == 'a' || str[i] == 'e'|| str[i] == 'o'|| str[i] == 'i' ||
    str[i] == 'u' ){
        count++;
    }
}
cout<<count;
    
    return 0;
}