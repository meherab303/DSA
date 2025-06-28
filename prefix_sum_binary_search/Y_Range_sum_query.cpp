#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,q;cin>>n>>q;
  vector<int>v(n+1);
  for(int i=1;i<=n;i++){
    cin>>v[i];
  } 
  vector<long long int>pre_sum(n+1);
  pre_sum[1]=v[1];

  for(int i=2;i<=n;i++){
     pre_sum[i]=pre_sum[i-1]+v[i];
  } 
  
 
 while(q--){
    int l,r;
    cin>>l>>r;
    long long int sum;
    if(l!=1){
        sum=pre_sum[r]-pre_sum[l-1];
    }else{
        sum=pre_sum[r];
    }
    
    
    cout<<sum<<endl;
 }
  return 0;
}