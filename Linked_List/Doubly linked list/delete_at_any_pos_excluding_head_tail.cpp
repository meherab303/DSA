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
void  delete_at_any_pos_excluding_head_tail(Node* head,int idx){
  Node* tmp=head;
  for(int i=1;i<idx;i++){
    tmp=tmp->next;
  }
  Node* deleteNode=tmp->next;
  tmp->next=deleteNode->next;
  tmp->next->prev=tmp;
  delete deleteNode;

   
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

  delete_at_any_pos_excluding_head_tail(head,1);
  printing_forward_doubly_linked_list(head);
  
 
   
  return 0;
}