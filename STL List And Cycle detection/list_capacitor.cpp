#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  list<int>l={1,2,3,4,5,6};
  cout<<l.size()<<endl; 
  cout<<l.max_size()<<endl; 
  cout<<l.empty()<<endl; //return true or false;
  l.resize(3);
  //l.resize(10,7); // baki node gular value hbe 7
  l.clear();
  for(int val:l){
    cout<<val<<" ";
  }
  return 0;
}