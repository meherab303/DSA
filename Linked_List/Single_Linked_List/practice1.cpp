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
  Node* head=new Node(5);
  Node* a=new Node(7);
  Node* b=new Node(1);
  Node* c=new Node(14);
  Node* d=new Node(3);
  Node* e=new Node(11);

  head->next=a;
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;

  int sum=0;
  Node* tmp=head;
  while(tmp->next!=d){
    sum+=tmp->val;
    tmp=tmp->next;
  }
  sum-=tmp->val;
  cout<<sum;
   
  return 0;
}