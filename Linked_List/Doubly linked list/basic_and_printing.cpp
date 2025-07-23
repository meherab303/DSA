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
void printing_backward_doubly_linked_list(Node* tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
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

  printing_forward_doubly_linked_list(head);
  
  printing_backward_doubly_linked_list(tail);
   
  return 0;
}