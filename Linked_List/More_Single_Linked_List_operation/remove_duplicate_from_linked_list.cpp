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
void delete_at_any_pos(Node* head,int idx){

    for(int i=0;i<idx-1;i++){
        head=head->next;
    }
    Node* deleteNode=head->next;
    head->next=head->next->next;
    delete deleteNode;
}

void remove_duplicate(Node* head) {
    Node* i = head;
    while (i != NULL) {
        Node* prev = i;
        Node* j = i->next;

        while (j != NULL) {
            if (j->val == i->val) {
                Node* deleteNode = j;
                prev->next = j->next;
                j = j->next;
                delete deleteNode;
            } else {
                prev = j;
                j = j->next;
            }
        }

        i = i->next;
    }
}

void printing_Linked_list(Node* head){
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
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    remove_duplicate(head);
    printing_Linked_list(head);
    

    return 0;
}