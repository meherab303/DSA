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
int max_value_from_linked_list(Node* head){
    int max=INT_MIN;
    while(head!=NULL){
        if(head->val>max){
            max=head->val;
        }
        head=head->next;
    }
    return max;
};
int min_value_from_linked_list(Node* head){
    int min=INT_MAX;
    while(head!=NULL){
        if(head->val<min){
            min=head->val;
        }
        head=head->next;
    }
    return min;
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
    int max=max_value_from_linked_list(head);
    int min=min_value_from_linked_list(head);
    int diff=max-min;
    
    cout<<diff;

    return 0;
}
