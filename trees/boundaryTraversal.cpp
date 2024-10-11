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
void leftBoundary(Node* root){
    if(root == NULL) return ;
    if(root->left==NULL  && root->right==NULL)return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL)leftBoundary(root->right);

}
void bottomBoundary(Node* root){
    if(root == NULL) return ;
    if(root->left==NULL  && root->right==NULL)cout<<root->val<<" ";
    
    bottomBoundary(root->left);
    bottomBoundary(root->right);
    
}
void rightBoundary(Node* root){
    if(root == NULL) return ;
    if(root->left==NULL  && root->right==NULL)return;
    
    rightBoundary(root->right);
    if(root->right == NULL)rightBoundary(root->left);
    cout<<root->val<<" ";
}
void boundaryTraversal(Node* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
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

    boundaryTraversal(a);
   

    
    return 0;
}