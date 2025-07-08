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

void  insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;
}

void delete_at_any_pos_based_on_user_index(Node* &head,Node* &tail,int idx){

    if(head==NULL){
        return;
    }

    if(idx==0){
        Node* deleteHead=head;
        head=head->next;
        if(head==NULL){
            tail=NULL;
        }
        delete deleteHead;
        return;
    }

    Node* tmp=head;

    for(int i=0;i<idx-1;i++){
        if(tmp->next==NULL || tmp==NULL){
            return;
        }
        tmp=tmp->next;
    }


    Node* deleteNode=tmp->next;
    if(deleteNode==NULL)return;

    if(deleteNode==tail)tail=tmp;
    tmp->next=deleteNode->next;

    delete deleteNode;
}

void printing_linked_list(Node* head){
    if(head==NULL){
        cout<<"No value in linked list"<<endl;
        return;
    };
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    
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
  int idx;cin>>idx;
  cout<<"head ache="<<head->val<<endl;
  cout<<"tail ache="<<tail->val<<endl;
  delete_at_any_pos_based_on_user_index(head,tail,idx);
  printing_linked_list(head);

//   cout<<"tail ache="<<tail->val;
   
  return 0;
}