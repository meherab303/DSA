#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  string s;
  getline(cin,s);

  stringstream ss(s); //s ke string er stream e convert korbe jeno kew keyboard theke likhse string take

  string words;

  map<string,int>mp;

  while(ss>>words){  //cin er moton kaj kore tai ss>>words
    mp[words]++;
  }

  for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
  }



  return 0;
}

