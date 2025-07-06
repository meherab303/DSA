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
void insert_at_any_pos(Node* head,int idx,int val){ //time complexity --o(1)
    Node* newnode= new Node(val); //o(1)
    for(int i=0;i<idx-1;i++){   // o(n)
        head=head->next;
        if(head==NULL) return;
    }
    newnode->next=head->next; //o(1)
    head->next=newnode;  //o(1)
};

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
  Node* b=new Node(30);
  Node* c=new Node(40);

  head->next=a;
  a->next=b;
  b->next=c;

  insert_at_any_pos(head,2,100);
  insert_at_any_pos(head,3,200);
  printing_linked_list(head);
   
  return 0;
}