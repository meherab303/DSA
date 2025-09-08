#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  map<string,int>mp;   // key-value pair e thake.
  
  //ekta value insert=O(logN);
  mp["fahim"]=5; 
  mp["nahin"]=10;
  mp["mamun"]=15;
  mp["adib"]=0;

  for(auto it=mp.begin();it!=mp.end();it++){     //N ta value=O(NlogN) 
    cout<<it->first<<" "<<it->second<<endl;  //ekt value insert e O(logN)
  }

  cout<<mp["asm"]<<endl; // 0 ashbe .
  cout<<mp["adib"]<<endl; //0 ashbe but ei key ta exist kore.
  //map e key na thakle or value bydefault 0 hoi.abar shotti shotti e 0 holeo 0.like adib
  //jar karone key ta exist kore kina bujha jaina.eita count diye solve kora hoi.
  //count true or false return kore based on key existance.

  if(mp.count("asm"))
    cout<<"Ache";
  else
    cout<<"Nai" ; 

  return 0;
}