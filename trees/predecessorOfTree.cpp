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
Node* predecessor(Node* root){
  if(root == NULL) return NULL;
  Node* temp = root->left;
  while(temp->right != NULL) temp = temp->right;
  return temp;
}
Node* successor(Node* root){
  if(root == NULL) return NULL;
  Node* temp = root->right;
  while(temp->right != NULL) temp = temp->right;
  return temp;
}
int main(){
    Node* a = new Node(4); // Root node
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(1);
    Node* e = new Node(3);
    Node* f = new Node(5);
    Node* g = new Node(7);

    a->left = b; // 4 -> 2
    a->right = c; // 4 -> 6
    b->left = d; // 2 -> 1
    b->right = e; // 2 -> 3
    c->left = f; // 6 -> 5
    c->right = g; // 6 -> 7

    Node* pre = predecessor(a);
    Node* suc = successor(a);
    cout<<pre->val<<endl;
    cout<<suc->val<<endl;
    
}