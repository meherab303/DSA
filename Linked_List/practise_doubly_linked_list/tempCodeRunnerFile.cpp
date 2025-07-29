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
void insert_at_any(Node* head,Node* &tail,int val,int idx){
    Node* newNode=new Node(val);

    Node* tmp=head;
    for(int i=1;i<idx;i++){