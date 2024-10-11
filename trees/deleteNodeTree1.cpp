

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
Node* deleteNode(Node* root,int key){
    if(root == NULL) return NULL;
    if(root->val == key) return NULL;

    if(root->val > key){
        root->left = deleteNode(root->left, key);
    }
    else{
         root->right = deleteNode(root->right, key);
    }
    return root;
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


    
}
/*
class Solution {
public:
    TreeNode* predecessor(TreeNode* root){
       root = root->left;
       while(root->right != NULL){
        root = root->right;
       }
       return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root == NULL) return NULL;
       if(root->val == key){ 
        if(root->left == NULL && root->right == NULL){
            return NULL;
        }
        if(root->left == NULL || root->right == NULL){
            if(root->left == NULL){
                return root->right;
            }
            else{
                return root->left;
            }
        }
        else{
            TreeNode* temp = predecessor(root);
            root->val = temp->val;
            root->left  =  deleteNode(root->left,temp->val);

        }
       }
       else if(root->val > key){
          root->left  =  deleteNode(root->left,key);
       }
       else {
          root->right  =  deleteNode(root->right,key);
       }
       return root;
    }
};
*/