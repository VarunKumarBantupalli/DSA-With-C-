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
        this->next = NULL;
    }

    static void insertAtHead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }


    static void Print(Node *&head)
    {
        Node *temp = head;
        cout<<temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
};
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node::Print(head);
    Node::insertAtHead(12);
    Node::Print(head);
}