#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }


};
Node* input_tree(){
    int val;cin>>val;
    Node* root=NULL;
    if(val!=-1)root=new Node(val);
    queue<Node*>q;

    if(root)
        q.push(root);
    while(!q.empty()){
        Node* parent=q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node* myLeft=NULL;
        Node* myRight=NULL;
        if(l!=-1) myLeft=new Node(l);
        if(r!=-1)myRight=new Node(r);

        parent->left=myLeft;
        parent->right=myRight;

        if(parent->left)
            q.push(myLeft);
        if(parent->right)
            q.push(myRight);    
    }    
    return root;


}

bool binary_search_in_tree(Node* root,int x){
    if(root==NULL)
        return false;
    if(root->val==x)
        return true;
    if(x<root->val)
        return binary_search_in_tree(root->left,x);
    else
        return binary_search_in_tree(root->right,x);            
}

int main()
{
  Node* root=input_tree();


  int value;cin>>value;  
  bool result=binary_search_in_tree(root,value);

  result?cout<<"found":cout<<"not found";
   
  return 0;
}