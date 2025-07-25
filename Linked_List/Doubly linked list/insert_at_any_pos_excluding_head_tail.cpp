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
void  insert_at_any_pos_excluding_head_tail(Node* head,int idx,int val){
    Node* newNode=new Node(val);
    for(int i=1;i<idx;i++){
        head=head->next;
    }
    // cout<<head->val<<endl; //check kora j head idx er ager node e ache kina

    newNode->next=head->next;
    head->next->prev=newNode;

    head->next=newNode;
    newNode->prev=head;


}

int main()
{
//   Node* head=NULL;
//   Node* tail=NULL;
  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* tail=new Node(30);

  head->next=a;
  a->prev=head;

  a->next=tail;
  tail->prev=a;

  insert_at_any_pos_excluding_head_tail(head,2,40); 
  printing_forward_doubly_linked_list(head);
  
 
   
  return 0;
}