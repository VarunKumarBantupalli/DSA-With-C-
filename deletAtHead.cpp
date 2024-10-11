#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};
void deleteAtHead(Node* &head){
    head = head->next;
    return;
}
void print(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    node1->next = node2;
    node2->next = node3;
    Node* head = node1;
    print(head);
    deleteAtHead(head);  
    print(head);

    return 0;
}