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
class myStack{
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
        Node* deleteNode=tail;
        tail=tail->prev;
        delete deleteNode;
        if(tail==NULL){
            head=NULL;
            return;
        }
        tail->next=NULL;
    }
    int top(){
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
  myStack st;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    st.push(x);
  }
  
  while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();

  }
  
   
  return 0;
}