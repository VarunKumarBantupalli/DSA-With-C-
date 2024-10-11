#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node(int data) {
        this->val = data;
        this->prev = this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;
int size = 0;

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayRev(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtTail(int val) {
    Node* temp = new Node(val);
    if (size == 0) {
        head = tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    size++;
}

void insertAtHead(int val) {
    Node* temp = new Node(val);
    if (size == 0) {
        head = tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    size++;
}

void insertAtIndex(int index, int val) {
    if (index < 0 || index > size) {
        cout << "Index out of bounds" << endl;
        return;
    }
    if (index == 0) {
        insertAtHead(val);
        return;
    }
    if (index == size) {
        insertAtTail(val);
        return;
    }
    Node* temp = new Node(val);
    Node* current = head;
    for (int i = 0; i < index - 1; i++) {
        current = current->next;
    }
    temp->next = current->next;
    temp->prev = current;
    current->next->prev = temp;
    current->next = temp;
    size++;
}

void deleteAtTail() {
    if (size == 0) {
        cout << "List is empty" << endl;
        return;
    }
    if (size == 1) {
        delete head;
        head = tail = NULL;
    } else {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
    size--;
}

void deleteAtHead() {
    if (size == 0) {
        cout << "List is empty" << endl;
        return;
    }
    if (size == 1) {
        delete head;
        head = tail = NULL;
    } else {
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    size--;
}

void deleteAtIndex(int index) {
    if (index < 0 || index >= size) {
        cout << "Index out of bounds" << endl;
        return;
    }
    if (index == 0) {
        deleteAtHead();
        return;
    }
    if (index == size - 1) {
        deleteAtTail();
        return;
    }
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}

int main() {
    insertAtTail(10);
    insertAtTail(20);
    insertAtTail(30);
    insertAtTail(40);
    insertAtTail(50);
    
    display(head);
    displayRev(tail);
    
    insertAtHead(5);
    display(head);
    displayRev(tail);
    
    insertAtIndex(2, 15);
    display(head);
    displayRev(tail);
    
    deleteAtTail();
    display(head);
    displayRev(tail);
    
    deleteAtHead();
    display(head);
    displayRev(tail);
    
    deleteAtIndex(2);
    display(head);
    displayRev(tail);
    
    return 0;
}

