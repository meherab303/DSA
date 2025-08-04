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
class myQueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sizee=0;
    

    void push(int val){
        sizee++;
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
    void pop(){
        sizee--;
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;
        if(head==NULL){
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front(){
        return head->val;
    }
    int back(){
        return tail->val;
    }
    int size(){
        return sizee;
    }
    bool empty(){
        return head==NULL;
    }
};
int main()
{
  myQueue q;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    q.push(x);
  }
  while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
  }
   
  return 0;
}