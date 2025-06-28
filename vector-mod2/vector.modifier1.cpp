#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  vector<int>v={1,2,3,4,5};
//   vector<int>v2=v; //assign
//   for(int x:v2){
//     cout<<x<<" ";
//   } 
// v.insert(v.begin()+2,100); //single value insert
// vector<int>v3={100,200,300};
// v.insert(v.begin()+2,v3.begin(),v3.end()); //multiple value insert
//   for(int x:v){
//     cout<<x<<" ";
//   }

// v.erase(v.begin()+2); //erase single value
// v.erase(v.begin()+1,v.end()-1); // erase multile value .v.end()-1 er jaigai v.begin()+4 dileo same kaj e hoito.
v.push_back(200);
v.pop_back();
for(int x:v){
    cout<<x<<" ";
  }
  return 0;
}