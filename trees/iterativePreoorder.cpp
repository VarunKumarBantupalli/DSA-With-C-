#include <iostream>
#include<vector>
#include<stack>


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
void helper(Node* root ,vector<int>& ans){
    stack<Node*> st;
    if(root)st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->right)st.push(temp->right);
        if(temp->left)st.push(temp->left);
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
    vector<int> ans;
    helper(a,ans);
    for(int i = 0 ; i< ans.size();i++){
        cout<<ans[i]<<" ";
    }




    
    return 0;
}