#include <iostream>
using namespace std;
class Queue{
    public:
    int f,b;
    int arr[5];
    Queue(){
       f = 0 ; 
       b = 0;
    }
    void push(int val){
        if(b == 5)cout<<"queue overflow" ;
        else{
           arr[b] = val;
           b++;
        }
    }
        void pop(){
        if(b == 0)cout<<"queue underflow" ;
        else{
          f++;
        }
    }
    int size(){
        return b-f;
    }
    void display(){
        for(int i = f ; i < b ;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(140);
    q.push(105);
    q.pop();
    q.display();
    cout<<q.size();
}