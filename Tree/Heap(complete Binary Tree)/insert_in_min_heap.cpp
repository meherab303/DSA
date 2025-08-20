#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];

   int val;cin>>val;
   v.push_back(val);

   int current_child_idx= v.size()-1;

   while(current_child_idx!=0){

    int parent_idx_of_current_child_idx=(current_child_idx-1)/2;

    if(v[parent_idx_of_current_child_idx]>v[current_child_idx])
     swap(v[parent_idx_of_current_child_idx],v[current_child_idx]);
    else
        break; 
    
    current_child_idx=parent_idx_of_current_child_idx; 
   }
   
   for(int x:v)
    cout<<x<<" ";
  return 0;
}