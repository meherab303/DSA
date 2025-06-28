#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int count=0;
  for(int x:v){
    auto it=find(v.begin(),v.end(),x+1);
    if(it!=v.end()){

        count+=1;
    }
  }
  cout<<count;
    return 0;
}