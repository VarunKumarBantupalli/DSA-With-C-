#include <iostream>
#include <vector>
#include <queue>

using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
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
int levels(Node* temp){
    if(temp == 0 )return 0;
    return 1+ max(levels(temp->left),levels(temp->right));
}
void nthLevel(Node* root , int level ,int currlevel){
    if(root == nullptr) return ;
       if(level == currlevel){
        cout<<root->val<<" ";
        return ;
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







Node* construct(vector<int>& arr){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2 ;
    while(!q.empty() && i < arr.size())
    {   

        Node* temp = q.front();
        q.pop();
        Node *l;
        Node *r;
        if(arr[i]!=INT32_MIN){
          l = new Node(arr[i]);
        }
        else{
            l = NULL;
        }
        if(j != arr.size() && arr[j]!=INT32_MIN){
          r = new Node(arr[j]);
        }
        else{
            r = NULL;
        }
        if(l!= NULL)q.push(l);
        if(r!= NULL)q.push(r);


        temp->left = l;
        temp->right = r;

        i = i+2;
        j = j+2;        
    }
    return root;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, INT32_MIN, 6, INT32_MIN, INT32_MIN, 7, 8, 9};
    Node* root =construct(arr);
    levelOrder(root);
}