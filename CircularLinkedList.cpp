#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int a)
    {
        this->value = a;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value  = this -> value;
        if (next != NULL){
            delete next ;
            next = NULL;
        }
        cout<<"memory is free for node with data value "<<value <<endl ; 
    }
};
int main(){
    
}