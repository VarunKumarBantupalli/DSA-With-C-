#include <iostream>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
};
void insertAtTail(Node* &tail ,int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    
}
int main(){
    Node* node1 = new Node(10);
    Node* tail  = node1;
    Node* head  = node1;
    insertAtTail(tail ,20);
    insertAtTail(tail ,30);
    insertAtTail(tail ,40);
    insertAtTail(tail ,50);
    print(head);
    
    return 0;
} 