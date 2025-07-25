#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    Node* prev;
    int val;
    Node* next;
  

    Node(int val){
        this->prev=NULL;
        this->val=val;
        this->next=NULL;
       
    }


};
void printing_forward_doubly_linked_list(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void  insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode= new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1){
        break;
    }
    insert_at_tail(head,tail,val);  
 }

 
  
  printing_forward_doubly_linked_list(head);
  
 
   
  return 0;
}