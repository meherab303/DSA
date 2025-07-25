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
//   Node* head=NULL;
//   Node* tail=NULL;
  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* tail=new Node(30);

  head->next=a;
  a->prev=head;

  a->next=tail;
  tail->prev=a;

  insert_at_tail(head,tail,100);  
  insert_at_tail(head,tail,200);  
  printing_forward_doubly_linked_list(head);
  
 
   
  return 0;
}