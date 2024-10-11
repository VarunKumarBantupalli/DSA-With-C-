#include <iostream>
using namespace std;
class Node {
    public:
    int value;
    Node* next;
    Node(int a){
        this->value =a;
        this->next = NULL;
    }
    void insertathead(Node* &head ,int d){
        //new node create
        Node* temp = new Node(d);
        temp ->next = head;
        head = temp ;
        
        
    }
    void print(Node* &head){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->value<< " ";
            
        }
        cout<<endl;
        
    }
};
int main(){
    Node* node1 = new Node(10);
    //head pointed to node1
    Node* head = node1;
    print(head);
    insertathead(head,12);
     print(head);
     insertathead(head,15);
     print(head);
     
    
    
}