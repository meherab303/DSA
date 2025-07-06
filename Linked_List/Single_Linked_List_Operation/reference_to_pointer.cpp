#include<bits/stdc++.h>
using namespace std;
void fun(int* &p){
    // int y=200;
    // p=&y;
    // cout<<*p<<endl;
    p=NULL;
}
int main()
{
  
  int x=10;
  int* p=&x;
  fun(p); 
//   cout<<*p<<endl; // immediately local variable er memory overwrite nao hote pare.

  cout<<p<<endl; 

  return 0;
}