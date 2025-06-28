#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<int>v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  } 

  int elem;cin>>elem;
  int left=0;
  int right=n-1;
  
  while(left<=right){
    int mid=(right+left)/2;

    if(v[mid]==elem){
        cout<<"found";
        
        return 0;
    }else{
        if(v[mid]<elem){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
  }

    cout<<"not found";
  

  return 0;
}