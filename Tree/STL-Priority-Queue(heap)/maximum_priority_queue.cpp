#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  priority_queue<int>pq;
  pq.push(100);
  pq.push(200);
  pq.push(50);
  cout<<pq.top()<<endl; 
  pq.pop();
  cout<<pq.top()<<endl;
  pq.push(300);
  pq.push(500);
  pq.push(1000);
  cout<<pq.top()<<endl;

  cout<<pq.size()<<endl;
  cout<<pq.empty()<<endl;

  return 0;
}