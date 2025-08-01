#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    Node* prev;
    string val;
    Node* next;

    Node(string val){
        this->prev=NULL;
        this->val=val;
        this->next=NULL;
    }


};
void insert_at_tail(Node* &head,Node* &tail,string val){
    Node* newNode=new Node(val);

    Node* tmp=tail;
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tmp->next=newNode;
    newNode->prev=tmp;
    tail=newNode;

}

void printing_forwarding(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void visit_place(Node* &head,Node* &tmp,string s){
    
    if(s!="prev" && s!="next"){
        Node* temp2=head;
        cout<<"tmp2-->"<<tmp->val<<endl;
        while(temp2!=NULL){

        if(temp2->val==s){
            tmp=temp2;
            cout<<temp2->val<<endl;
            return;
        }else{
             temp2=temp2->next;
        }     
    }
     cout<<"Not Available"<<endl;  
    }
    else if(s=="prev"){
        if(tmp->prev==NULL){
            cout<<"Not Available"<<endl;
        }
        else{
            tmp=tmp->prev;
            cout<<tmp->val<<endl;
        }
    }
    else if(s=="next"){
        if(tmp->next==NULL){
            cout<<"Not Available"<<endl;
        }else{
            tmp=tmp->next;
            cout<<tmp->val<<endl;
        }
    }
}

int main()
{
 Node* head=NULL;
 Node* tail=NULL;



 
 string val;
 while(true){
    cin>>val;
    if(val=="end"){
        break;
    }
    insert_at_tail(head,tail,val);
 }
//  printing_forwarding(head);
//  cout<<endl;
 int query;cin>>query;
 string command,address;
 Node* currentNode=head;
 while(query--){
    cin>>command;
    
    if(command=="visit"){
        cin>>address;
        visit_place(head,currentNode,address);
        
        cout<<"head Node->"<<head->val<<endl;
        
    }
    else{
        visit_place(head,currentNode,command);
        
        cout<<"head Node->"<<head->val<<endl;
        
    }
    
 }
   
  return 0;
}
