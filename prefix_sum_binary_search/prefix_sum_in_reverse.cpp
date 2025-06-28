#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long int>prefix_sum(n);
     prefix_sum[0]=v[0];
     for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+v[i];
    }
    
    for(auto it=prefix_sum.end()-1;it!=prefix_sum.begin()-1;it--){
        cout<<*it<<" ";
    }
    
    

    return 0;
}