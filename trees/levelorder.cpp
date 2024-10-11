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

int levels(Node* temp){
    if(temp == 0 )return 0;
    return 1+ max(levels(temp->left),levels(temp->right));
}
void nthLevel(Node* root , int level ,int currlevel){
    if(root == nullptr) return ;
       if(level == currlevel){
        cout<<root->val<<" ";
       }
      nthLevel(root->left,level+1,currlevel); 
      nthLevel(root->right,level+1,currlevel); 

}
// to print the values in reverse " 1 3 2 7 6 5 4"
// void nthLevel(Node* root , int level ,int currlevel){
//     if(root == nullptr) return ;
//        if(level == currlevel){
//         cout<<root->val<<" ";
//        }
//       nthLevel(root->right,level+1,currlevel); 
//       nthLevel(root->left,level+1,currlevel); 

// }
void levelOrder(Node* temp){
   int n = levels(temp);
   for(int i = 0 ; i < n ;i++){
    nthLevel(temp ,0 , i);
   }  
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

    levelOrder(a);



   



    
    return 0;
}
