#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  priority_queue<int,vector<int>,greater<int>>pq;  //greater function e () deya laghbena karon eikhane full greater class niye kaj hoi .greater function niye kaj hoina.
  pq.push(100);
  pq.push(200);
  pq.push(300);
  cout<<pq.top()<<endl; 
  pq.pop();
  cout<<pq.top()<<endl;
  pq.push(5);
  cout<<pq.top()<<endl;
  return 0;
}