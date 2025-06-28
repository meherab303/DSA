#include<bits/stdc++.h>
using namespace std;
int main()
{
  
//   vector<int>v; //type-1
//   cout<<v.size();
    //  int n;
    //  cin>>n;
    // vector<int>v(n); //type 2
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    // vector<int>v(10,-1); //type-3
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // vector<int>v3={1,2,3,4,5}; //type-4
    // for(size_t i=0; i <v3.size();i++){
    //     cout<<v3[i]<<" ";
    // }
    // vector<int>v={1,2,3,4,5,6,9};
    // vector<int>v2(v);  //type-5
    // for(int i=0; i <v2.size();i++){
    //     cout<<v[i]<<" ";
    // }

    int arr[5]={1,3,5,7,9};
    vector<int>v(arr,arr+5);

    // for(int i=0; i <v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // for(int c:v){ //using range based for loop
    //     cout<<c<<" ";
    // }

    for(int& c:v){  //using range based for loop with reference
        c*=2;
        cout<<c<<" ";
    }

    cout<<endl;
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }


    // for(auto it=v.begin();it<v.end();it++){ //using iterator
    //     cout<<*it<<" ";
    // }
  return 0;
}