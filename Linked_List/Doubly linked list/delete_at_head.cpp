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
void  delete_at_head(Node* &head,Node* &tail){
   Node* deleteNode= head;
   head=head->next;
   delete deleteNode;
   if(head==NULL){
    tail=NULL;
    return;
   }
   head->prev=NULL;
}

int main()
{

  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* tail=new Node(30);

  head->next=a;
  a->prev=head;

  a->next=tail;
  tail->prev=a;

  delete_at_head(head,tail);
  delete_at_head(head,tail);
  delete_at_head(head,tail);
  cout<<head<<endl;
  cout<<tail<<endl;
  printing_forward_doubly_linked_list(head);
  
 
   
  return 0;
}