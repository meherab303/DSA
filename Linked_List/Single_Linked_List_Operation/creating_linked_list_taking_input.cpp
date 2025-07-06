#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }


};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void printing_linked_list(Node* head){
    
    while(head!=NULL){
        
        cout<<head->val<<endl;
        head=head->next;
    }
    
}
int main()
{
  Node* head=NULL;
  Node* tail=NULL;

  int n;cin>>n;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    insert_at_tail(head,tail,val);
  }
  printing_linked_list(head);
   
  return 0;
}