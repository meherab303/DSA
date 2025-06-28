#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;cin>>n>>q;
  vector<int>v(n); 
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<q;i++){
    int a,b;cin>>a>>b;
    int sum=0;
    for(int j=a;j<=b;j++){
        sum+=v[j-1];
    }
    cout<<sum<<endl;
  }
  
  return 0;
}