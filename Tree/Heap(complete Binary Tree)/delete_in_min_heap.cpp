#include<bits/stdc++.h>
using namespace std;
void insert_in_min_heap(vector<int>&v,int val){
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
}
void print_min_heap(vector<int>v){
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
}
void delete_in_min_heap(vector<int>&v){
    cout<<v[0] <<" "<<"deleted->";

    v[0]=v.back();
    v.pop_back();

    int curr_child_idx=0;
    while(true){
        int left_child_idx=(curr_child_idx*2)+1;
        int right_child_idx=(curr_child_idx*2)+2;

    int left_child_val=INT_MAX;
    int right_child_val=INT_MAX;
    if(left_child_idx<v.size())
        left_child_val=v[left_child_idx];
    if(right_child_idx<v.size())
        right_child_val=v[right_child_idx];
    if(left_child_val<=right_child_val && left_child_val<v[curr_child_idx]) 
    {
        swap(v[left_child_idx],v[curr_child_idx]);
        curr_child_idx=left_child_idx;
    } else if(right_child_val<left_child_val && right_child_val<v[curr_child_idx]){
        swap(v[right_child_idx],v[curr_child_idx]);
        curr_child_idx=right_child_idx;
    }else
         break;   
    }
}

int main()
{
  vector<int>v;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    insert_in_min_heap(v,val);
  } 
  print_min_heap(v);
  delete_in_min_heap(v);
  print_min_heap(v);
  delete_in_min_heap(v);
  print_min_heap(v);
  delete_in_min_heap(v);
  print_min_heap(v);

  return 0;
}