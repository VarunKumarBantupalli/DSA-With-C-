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
void printData(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtMiddle(Node *&head, Node *&tail, int pos, int data)
{

    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    };
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteAtPosition(Node *&head, int position)
{
    if (position == 1)
    {
        Node* temp = head ;
        temp -> next = NULL;
        head = temp -> next ;      
        temp -> next -> prev = NULL ;
        delete temp ;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtTail(tail, 15);
    printData(head);
    insertAtTail(tail, 43);
    printData(head);
    insertAtTail(tail, 93);
    printData(head);
    insertAtTail(tail, 89);
    printData(head);
    insertAtMiddle(head, tail, 2, 100);
    printData(head);
    deleteAtPosition(head ,1);

    //     printData(head);
    //     cout << "the length of the linkedList is :" << getLength(head) << endl;
    //     insertAtHead(head, 13);
    //     printData(head);
    //     cout << "the length of the linkedList is :" << getLength(head) << endl;
    //     insertAtHead(head, 23);
    //     printData(head);
    //     cout << "the length of the linkedList is :" << getLength(head) << endl;
    //     insertAtHead(head, 45);
    //     printData(head);
    //     cout << "the length of the linkedList is :" << getLength(head) << endl;
}