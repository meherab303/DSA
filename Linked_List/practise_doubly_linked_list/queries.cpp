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
void insert_at_any(Node* head,Node* &tail,int val,int idx, bool &flag){
    Node* newNode=new Node(val);

    Node* tmp=head;
    for(int i=1;i<idx;i++){
        tmp=tmp->next;
        if(tmp==NULL){
           flag=true;
            return ;
        }
    }

    if(tmp->next==NULL){
        tmp->next=newNode;
        newNode->prev=tmp;
        tail=newNode;
    }else{

        newNode->next=tmp->next;
        tmp->next->prev=newNode;
        tmp->next=newNode;
        newNode->prev=tmp;

    }

   

}
void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;  

}

void printing_forwarding(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void printing_backward(Node* tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

 
int main()
{
 Node* head=NULL;
 Node* tail=NULL;


 bool flag=false;
 int quer;cin>>quer;
 while(quer--){
    int x,v;cin>>x>>v;
    if(x==0){
        insert_at_head(head,tail,v);
        printing_forwarding(head);
        printing_backward(tail);
        
    }else{
        insert_at_any(head,tail,v,x,flag);
        if(flag){
            cout<<"Invalid"<<endl;
            flag=false;
            
        }else{
            printing_forwarding(head);
            printing_backward(tail);
        }
        
        
    }
        
 }
 
   
   
   
  return 0;
}