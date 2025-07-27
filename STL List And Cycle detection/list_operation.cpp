#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  list<int>l={100,300,300,200,10,400,20,30,40,50,60,70,80,90,95,95,95,90};
  l.remove(95); //jotogula 90 thakbe remove kore dibe

  l.sort();//ascending
  l.sort(greater<int>()); //descending

  l.unique(); //list must be sort //dublicate vale remove kore

 l.reverse();


  
  for(int val:l){
    cout<<val<<" ";
  }
  return 0;
}