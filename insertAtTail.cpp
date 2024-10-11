#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int a){
        this -> data = a;
        this-> next = nullptr;
    }
    };
    void insertAtHead(Node* &head , int d){
        Node* temp = new Node(d);
         temp ->next = head ;
        head = temp ;
    }
    void insertAtTail(Node* &tail ,int d){
        Node* temp = new Node(d);
        tail -> next =temp ;
        tail = temp;

    }
    void print (Node* &head){
        Node* temp = head ;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp ->next;
        }
        cout<<endl;

    }
void print1 (Node* &tail){
        Node* temp = tail ;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp ->next;
        }
        cout<<endl;

    }


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
     print(head);
    // insertAtHead(head ,12);
    //   print(head);
    //   insertAtHead(head ,15); 
    //   print(head);
     insertAtTail(head ,12);
     print1(head);
     insertAtTail(head ,15);
     print1(head);


 return 0 ;
}