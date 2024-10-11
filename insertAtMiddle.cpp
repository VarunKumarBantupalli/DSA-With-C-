#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int a)
    {
        this->data = a;
        this->next = nullptr;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtMiddle(Node *&head ,int position , int value){
    int count = 1;
    Node *temp = head ;
    while(count < position-1 ){
        temp = temp -> next ;
        count++;
    }
    Node* nodeToInsert = new Node(value);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtMiddle(head , 2 ,69);
    print(head);

    return 0;
}