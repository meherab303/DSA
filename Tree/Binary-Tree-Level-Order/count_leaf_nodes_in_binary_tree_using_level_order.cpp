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

int level_order(Node* root){
    int count=0;
    if(!root){
        cout<<"No Tree"<<endl;
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* parent=q.front();
        q.pop();

        if(parent->left==NULL && parent->right==NULL)
            count++;
        if(parent->left)
            q.push(parent->left);
        if(parent->right) 
            q.push(parent->right);  
    }
    return count;
}
int main()
{
  Node* root=input_binary_tree();
  cout<<level_order(root);
   
  return 0;
}