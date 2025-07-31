#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>l;
  int query;cin>>query;
  while(query--){
     int x,v;cin>>x>>v;
     if(x==0){
        l.push_front(v);
        cout<<"L -> ";
        for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(auto it=--l.end();;--it){
            cout<<*it<<" ";
            if(it==l.begin())break;
        }
         cout<<endl;
    }
     else if(x==1){
        l.push_back(v);
        cout<<"L -> ";
        for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
         for(auto it=--l.end();;--it){
            cout<<*it<<" ";
            if(it==l.begin())break;
        }
         cout<<endl;
    }
     else if(x==2){
        if(!l.empty()){
            if(v>=l.size())
        {
            cout<<"L -> ";
            for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
         for(auto it=--l.end();;--it){
            cout<<*it<<" ";
            if(it==l.begin())break;
        }
         cout<<endl;

        }else{
            l.erase(next(l.begin(),v));
             if(!l.empty()){
                cout<<"L -> ";
            for(auto it=l.begin();it!=l.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
         for(auto it=--l.end();;--it){
            cout<<*it<<" ";
            if(it==l.begin())break;
        }
         cout<<endl;
             }else{
                 cout<<"L ->"<<endl;
            cout<<"R ->"<<endl;
             }
        }

        }else{
            cout<<"L ->"<<endl;
            cout<<"R ->"<<endl;

        }
        
     }
  } 

  return 0;
}
// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list from both left to right and right to left.