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
Node* input_binary_tree(){
    int val;cin>>val;
    Node* root=NULL;
    if(val!=-1)root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
        q.push(root);
    while(!q.empty()){
        //1.queue theke Node ber kore ana
        Node* parent=q.front();
        q.pop();
        //2. Node take niye kaj 
        int l,r;cin>>l>>r;
        Node* myLeft=NULL;
        Node* myRight=NULL;
        if(l!=-1)myLeft=new Node(l);
        if(r!=-1)myRight=new Node(r);

        parent->left=myLeft;
        parent->right=myRight;

        //3.child nodegulake queue te push
        if(parent->left)
            q.push(myLeft);
        if(parent->right)
            q.push(myRight);    

    }
    return root;

}

int count_nodes(Node* root){
    if(root==NULL)
        return 0;
    int l=count_nodes(root->left);
    int r=count_nodes(root->right);
    return l+r+1;    
}  
int main()
{
  Node* root=input_binary_tree();
  cout<<count_nodes(root);
  
   
  return 0;
}