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
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void printing_Linked_list(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void delete_at_tail(Node* head,Node* &tail){

    while(head->next->next!=NULL){
    head=head->next;
    }
    Node* deleteNode=head->next;
    head->next=deleteNode->next;
    tail=head;
    delete deleteNode;
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int val;
    while(true){
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    printing_Linked_list(head);
    cout<<"--After deletion--"<<endl;
    delete_at_tail(head,tail);
    printing_Linked_list(head);
    cout<<endl;
    cout<<"head ache ekhon= "<<head->val<<endl;
    cout<<"tail ache ekhon= "<<tail->val<<endl;


  
   
  return 0;
}