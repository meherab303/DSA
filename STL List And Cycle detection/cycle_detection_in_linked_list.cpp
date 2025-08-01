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
int main()
{
  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* b=new Node(30);
  Node* c=new Node(40);
  Node* d=new Node(50);
  Node* e=new Node(60);

  head->next=a;
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  e->next=b;


  Node* slow=head;
  Node* fast=head;
  bool flag=false;

  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
        flag=true;
        break;
    }
  }

  flag==true?cout<<"Cycle Detected":cout<<"NO Cycle Detected";
   
  return 0;
}