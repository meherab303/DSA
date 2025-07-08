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
void remove_duplicate(Node* head,Node* &tail){
    Node* i=head;
    while(i->next!=NULL){
        Node* prev=i;
        Node* j=i->next;
        while(j!=NULL){
            if(i->val==j->val){
                Node* deleteNode=j;
                prev->next=j->next;
                 j=j->next;
                 if(deleteNode==tail){
                    tail=prev;
                 }
                 delete deleteNode;
            }else{
                prev=j;
                j=j->next;

            }
        }
        i=i->next;
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
    remove_duplicate(head,tail);
    printing_Linked_list(head);
    cout<<endl;
    cout<<"tail ache= "<< tail->val;

    return 0;
}





// Problem Statement

// You will be given a singly linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list.

// The process is, for each node N, traverse from that node and delete all nodes where the values are same with N.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// First line will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output the final linked list where there will be no duplicate values.
// Sample Input 0

// 1 2 3 4 5 -1
// Sample Output 0

// 1 2 3 4 5
// Sample Input 1

// 1 2 4 2 3 5 1 4 5 2 6 1 -1
// Sample Output 1

// 1 2 4 3 5 6
// Sample Input 2

// 5 5 1 1 2 4 2 4 1 3 5 0 -1
// Sample Output 2

// 5 1 2 4 3 0
// Sample Input 3

// 10 10 10 20 20 20 10 20 -1
// Sample Output 3

// 10 20


// void delete_at_any_pos(Node* head,int idx){

//     for(int i=0;i<idx-1;i++){
//         head=head->next;
//     }
//     Node* deleteNode=head->next;
//     head->next=head->next->next;
//     delete deleteNode;
// }


