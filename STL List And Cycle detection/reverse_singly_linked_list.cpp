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

    Node* tmp=tail;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tmp->next=newNode;
    tail=newNode;
}
void printing_linked_list(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void reversed_singly_linked_list(Node* &head,Node* &tail,Node* tmp){
    if(tmp->next==NULL){
        head=tmp;
        return;
    }
    reversed_singly_linked_list(head,tail,tmp->next);
    tmp->next->next=tmp;
    tmp->next=NULL; 
    tail=tmp;
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
   reversed_singly_linked_list(head,tail,head);
   printing_linked_list(head);
  return 0;
}