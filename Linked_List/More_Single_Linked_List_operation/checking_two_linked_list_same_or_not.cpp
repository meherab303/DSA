#include <bits/stdc++.h>

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

int checking_two_same_linked_list(Node* head1,Node* head2){
    
    while(head1!=NULL && head2!=NULL){
        if(head1->val!=head2->val){
            break;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return (head1==NULL && head2==NULL)?1:0;
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
    int flag=checking_two_same_linked_list(head1,head2);
    flag==0?cout<<"NO":cout<<"YES";
    return 0;
}
