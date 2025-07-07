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
int finding_x_in_Linked_list(Node* head,int val){
    int count=-1;
    while(head!=NULL){
        count+=1;
        if(head->val==val){
            break;
        }
        head=head->next;
    }
    if(head==NULL)count=-1;
    return count;
}

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
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
        int x;cin>>x;
        int idx=finding_x_in_Linked_list(head,x);
        cout<<idx<<endl;
    }

    return 0;
}
