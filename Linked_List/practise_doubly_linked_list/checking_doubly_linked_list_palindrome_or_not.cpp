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
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);

    Node* tmp=tail;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tmp->next=newNode;
    newNode->prev=tmp;
    tail=newNode;

}

void printing_forwarding(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

void checking_palindrome(Node* head,Node* tail){
    int flag=true;
    for(Node *i=head,*j=tail; i->prev!=j && i!=j ;i=i->next,j=j->prev){
        if(i->val!=j->val){
            flag=false;
        }
    }
    flag?cout<<"palindrome":cout<<"not palidrome";
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
 
   printing_forwarding(head);
   cout<<endl;
   checking_palindrome(head,tail);
   
  return 0;
}