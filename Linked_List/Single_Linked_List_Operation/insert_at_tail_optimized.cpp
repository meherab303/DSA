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
void insert_at_tail_optimized(Node* &head,Node* &tail,int val){
    Node* newnode= new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return ;
    }
    tail->next=newnode;
    tail=newnode;
}
void printing_linked_list(Node* head){
    while(head!=NULL){
        cout<<head->val<<endl;
        head=head->next;
    }
}
int main()
{
  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* tail=new Node(30);

  head->next=a;
  a->next=tail;
//    Node* head= NULL;
//    Node* tail= NULL;
  insert_at_tail_optimized(head,tail,40);
  insert_at_tail_optimized(head,tail,50);
  printing_linked_list(head);
  cout<<"tail="<<tail->val;
   
  return 0;
}