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
void insert_at_tail(Node* &head,int val){   //time complexity --o(1)
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}

void printing_linked_list(Node* head){
    // Node* tmp=head;
    int count=0;

    while(head!=NULL){
        count+=1;
        cout<<head->val<<endl;
        head=head->next;
    }

    //size of the list
    cout<<count;

}

int main()
{
  Node* head=new Node(10);
  Node* a=new Node(20);
  Node* b=new Node(30);
  
  head->next=a;
  a->next=b;

  insert_at_tail(head,200);
  printing_linked_list(head);
 
   
  return 0;
}