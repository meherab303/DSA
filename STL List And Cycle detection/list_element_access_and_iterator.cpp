#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  list<int>l={1,2,3,4,5,6};
  cout<<l.back()<<endl; 
  cout<<l.front()<<endl; 
  cout<<*next(l.begin(),3); //iterator return kore tai dereference kore value print korte hoi

  //iterator
  cout<<*l.begin()<<endl;

//   cout<<*l.end()<<endl; //undefined behavior ashbe .karon eita null ke point kore ache

  return 0;
}