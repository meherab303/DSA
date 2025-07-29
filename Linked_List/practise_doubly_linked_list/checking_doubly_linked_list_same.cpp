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
void checking_two_doubly_linked_list_same_or_not(Node* head1,Node* head2,int &flag){
    while(head1!=NULL && head2!=NULL){
        if(head1->val!=head2->val){
            flag=1;
            break;
        }
        head1=head1->next;
        head2=head2->next;
        if((head1==NULL && head2!=NULL ) || (head1!=NULL && head2==NULL)){
            flag=1;
            break;
        }
    }
}
int main()
{
 Node* head1=NULL;
 Node* tail1=NULL;

 Node* head2=NULL;
 Node* tail2=NULL;
 
 int val;
 while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_at_tail(head1,tail1,val);
 }
 while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_at_tail(head2,tail2,val);
 }
 int flag=0;
   printing_forwarding(head1);
   cout<<endl;
   printing_forwarding(head2);
   checking_two_doubly_linked_list_same_or_not(head1,head2,flag);
   cout<<endl;
   flag==1?cout<<"not same":cout<<"same";
  return 0;
}