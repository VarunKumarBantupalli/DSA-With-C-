#include <bits/stdc++.h>
using namespace std;
int getlength( char name[]);
void reversestring(char name []);
int main(){
    char name[20] ;
    cout<<"enter the name of the person"<<endl ;
    cin>> name ;
    cout<<"your name is "<<name<<endl ;
    cout<<"the length of the name is:"<< getlength(name)<<endl;
    cout<<"the reverse of the name is:"<<endl;
    reversestring(name);
    cout << name ;

}
int getlength( char name[]){
    int count = 0;
    for (int i = 0 ; name[i] != '\0' ; i++ ){
           count++;
    }
    return count ;
}
void reversestring(char name []){
    int length = getlength(name);
    int start = 0 ;
    int end = length - 1 ;
    while(start <= end ){
        swap(name[start] ,name[end]);
        start ++;
        end --;
    }
    
}