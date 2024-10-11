
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head ,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    
}

int main() {
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node* head = node1;
    insertAtHead(head,5);
    insertAtHead(head,3);
    insertAtHead(head,1);
    print(head);
    
    
    return 0;
}