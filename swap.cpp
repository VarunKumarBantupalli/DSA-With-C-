#include <iostream>
using namespace std;
int main(){
    
    int a=5;
    int b=10;
     swap(&a,&b);
    cout<<a;
    cout<<b;
     
    
    return 0;
}
int swap(int *a, int *b){
        int *temp = a;
        *a =*b;
        *b = *temp;
    }
    