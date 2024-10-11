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
void display(Node* head){
    Node* temp = head;
    if(temp == NULL ) return ;
    cout<<temp->val<<" ";
     display(temp->left);
     display(temp->right);   
}
int sum(Node* head){
    Node* temp = head;
    if(temp == NULL ) return 0;

    int total = temp->val + sum(temp->left) + sum(temp->right);
    return total;
}
int size(Node* head){
    Node* temp = head;
    if(temp == NULL ) return INT32_MIN;
    int weight  = 1 + size(temp->left)+ size(temp->right); 
}
int maxInTree(Node* root){
    if(root == NULL) return 0;
    int lmax = maxInTree(root->left);
    int rmax = maxInTree(root->right);
    int maxi = max(root->val,max(lmax,rmax));

    return maxi;
}
int minInTree(Node* root){
    if(root == NULL) return INT32_MAX;
    int lmax = minInTree(root->left);
    int rmax = minInTree(root->right);
    int minin = min(root->val,min(lmax,rmax));

    return minin;
}
int product(Node* head){
    Node* temp = head;
    if(temp == NULL ) return 1;

    int total = temp->val * product(temp->left) * product(temp->right);
    return total;
}
int levels(Node* head){
    Node* temp = head;
    if(temp == NULL ) return 0;
    int level  = 1 + max(levels(temp->left), levels(temp->right));
    return level;
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
    display(a);
    int ans = sum(a);
    cout<<"the sum is:"<<ans<<endl;
    int siize = size(a);
    cout<<"the size is:"<<siize<<endl;
    int maxi = maxInTree(a);
    cout<<"the maximum in tree is:"<<maxi<<endl;
    cout<<"the product :"<<product(a)<<endl;
    int mini = minInTree(a);
    cout<<"the minimum in tree is:"<<mini<<endl;
    cout<<"the level of tree is:"<<levels(a)<<endl;

    
    return 0;
}