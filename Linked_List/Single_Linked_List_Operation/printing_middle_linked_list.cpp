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
void printing_linked_list(Node* head,int n){
    
//    if(n%2!=0){
//      for(int i=0;i<=n/2;i++){
//         if(i==n/2){
//             cout<<head->val<<endl;
//             break;
//         }
//         head=head->next;
//     }
//    }else{

//     for(int i=0;i<=(n/2);i++){
//         if(i==n/2 || i==(n/2)-1){
//             cout<<head->val<<endl;
            
//         }
//         head=head->next;
//     }


//    }

Node* tmp=head;

int target=n/2;

    for(int i=0;i<target-(n%2==0?1:0);i++){
        tmp=tmp->next;
    }

    if(n%2==0){
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }else{
        cout<<tmp->val;
    }
    
    
}
int main()
{
  Node* head=NULL;
  Node* tail=NULL;

  int n;cin>>n;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    insert_at_tail(head,tail,val);
  }
  printing_linked_list(head,n);
   
  return 0;
}