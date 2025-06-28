#include<bits/stdc++.h>
using namespace std;
int main()
{
  
//   vector<int>v={1,2,3,4,56,7};
//   cout<<v.size(); 
//   cout<<endl;
//   v.clear();
//   cout<<v.size()<<endl;
//   cout<<v[2]<<" "<<v[0]<<endl;
//   cout<<v.empty()<<endl;

    // v.resize(9,1);
    // for(int c:v){
    //     cout<<c<<" ";
    // }
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
  return 0;
}