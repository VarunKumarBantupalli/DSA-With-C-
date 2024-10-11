#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void inorder(Node* root,vector<int>& arr){
    if(root == NULL) return;
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
Node* preOrderTree(vector<int>& arr, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    Node* root = new Node(arr[mid]);
    root->left = preOrderTree(arr, start, mid - 1);
    root->right = preOrderTree(arr, mid + 1, end);
    return root;
}

int main(){
     vector<int> arr;
     Node* a = new Node(1);
     Node* b = new Node(3);
     Node* c = new Node(5);
     Node* d = new Node(7);
     Node* e = new Node(2);
     Node* f = new Node(4);
     Node* g = new Node(6);

    c->left = b;
    c->right = g;
    b->left = a;
    b->right = f;
    g->left = e;
    g->right = d;

     inorder(c,arr);
     for(int i = 0 ; i < arr.size() ;i++){
        cout<<arr[i]<<" ";
     }
     preOrderTree(arr,0,arr.size()-1);

}