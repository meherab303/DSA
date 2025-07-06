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

void insert_at_tail(Node* &head,int val){
    Node* newnode=new Node(val);
    //corner case if linked list is empty
    if(head==NULL){
        head=newnode;
        return ;

    }

    Node* tmp=head;

    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
    
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
  Node* b=new Node(30);

  head->next=a;
  a->next=b;
//  Node* head=NULL;
insert_at_tail(head,2000);
printing_linked_list(head);
   
  return 0;
}