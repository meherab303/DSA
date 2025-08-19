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

Node* array_to_bst_using_recusrion(int arr[],int left,int right){
    if(left>right)
        return NULL;
    int mid=(left+right)/2;
    Node* root=new Node(arr[mid]);
    Node* leftNode=array_to_bst_using_recusrion(arr,left,mid-1);
    Node* rightNode=array_to_bst_using_recusrion(arr,mid+1,right);
    root->left=leftNode;
    root->right=rightNode;

    return root;
}

int main()
{
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  Node* root=array_to_bst_using_recusrion(arr,0,n-1);
  
  lever_order(root); 
  
   
  return 0;
}


