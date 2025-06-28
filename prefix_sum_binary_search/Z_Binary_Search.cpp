#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,q;cin>>n>>q;
  vector<int>v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  } 
  sort(v.begin(),v.end());
  while (q--)
  {
    int element;cin>>element;
    int l=0;
    int r=n-1;
    bool found=false;
    while(l<=r){
        int mid=(l+r)/2;
        if(v[mid]==element){
            cout<<"found"<<endl;
            found=true;
            break ;
        }
        else if(v[mid]<element){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    if(!found==true){
        cout<<"not found"<<endl;
    }

  }
  
  

  return 0;
}