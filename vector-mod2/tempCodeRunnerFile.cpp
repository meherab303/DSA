// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
// string n;
// getline(cin,n);
// vector<int>v(26,0);
//  for(char c:n){
//     v[c-'a']+=1;
// }
// for(int i=0;i<26;i++){
//     if(v[i]!=0){
//         cout<<char('a'+i)<<" : "<<v[i]<<endl;
//     }
// }


  
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  
string n;
getline(cin,n);
vector<int>v(26,0);

 for(int i=0;i<n.size();i++){
    v[n[i]-97]+=1;
}

for(int i=0;i<26;i++){
    if(v[i]!=0){
        cout<<char(97+i)<<" : "<<v[i]<<endl;
    }
}
 
 
  
  return 0;
}