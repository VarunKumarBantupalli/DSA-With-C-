#include <iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};
void preorder(Node* head){
    Node* temp = head;
    if(temp == NULL ) return ;
    cout<<temp->val<<" ";
     preorder(temp->left);
     preorder(temp->right);   
}
void postorder(Node* head){
    Node* temp = head;
    if(temp == NULL ) return ;
    
     postorder(temp->left);
     postorder(temp->right); 
     cout<<temp->val<<" ";  
}
void inorder(Node* head){
    Node* temp = head;
    if(temp == NULL ) return ;
    
     inorder(temp->left);
     cout<<temp->val<<" ";
     inorder(temp->right);   
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b ;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    cout<<"preorder"<<endl;
    preorder(a); cout<<endl;
    cout<<"postorder"<<endl;
    postorder(a);cout<<endl;
    cout<<"inorder"<<endl;
    inorder(a);cout<<endl;


    
    return 0;
}