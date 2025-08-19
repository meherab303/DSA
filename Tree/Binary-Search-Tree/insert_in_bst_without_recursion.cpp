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

void lever_order(Node* root){
    if(root==NULL){
        cout<<"No Tree"<<endl;
         return;
    }
       
    queue<Node*>q;
    if(root)
        q.push(root);
    while(!q.empty()){
        Node* parent=q.front();
        q.pop();

        cout<<parent->val<<" ";

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);    
    }    

}

void insert_in_bst_without_recursion(Node* &root,int x){
    Node* newNode=new Node(x);

    if(root==NULL){
        root=newNode;
        return;
    }

    Node* currentNode=root;
    Node* parentNode=NULL;

    while(currentNode){
        parentNode=currentNode;

        if(currentNode->val<x){
            currentNode=currentNode->right;
        }else{
            currentNode=currentNode->left;
        }

    }
    
    if(x>parentNode->val){
        parentNode->right=newNode;
    }else{
        parentNode->left=newNode;
    }
}
int main()
{
  Node* root=input_tree();


  int value;cin>>value; 
  insert_in_bst_without_recursion(root,value);
  lever_order(root); 
  
   
  return 0;
}


