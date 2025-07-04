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
  Node* head=new Node(100);
  Node* a=new Node(20);
  Node* b=new Node(30);
  Node* c=new Node(40);

  //connection
  head->next=a;
  a->next=b;
  b->next=c;

  Node* temp=head; //jodi head pointer change kore dei tahole 1bar print er por ar kokhono print korte parbona karon head tokhon null kew point korbe 

//   while(head !=NULL ){

//     cout<<head->val<<endl;
//     head=head->next;

//   }

  while(temp !=NULL ){

    cout<<temp->val<<endl;
    temp=temp->next;

  }

  //printing 2nd time 

  temp=head;
  while(temp !=NULL ){

    cout<<temp->val<<endl;
    temp=temp->next;

  }
   
  return 0;
}