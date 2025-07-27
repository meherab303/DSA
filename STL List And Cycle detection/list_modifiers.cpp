#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  list<int>l={10,20,30,40,50,70};
  list<int>l2;
  l2=l;
  
  l2.push_back(60);
  l2.push_front(0);

  l2.pop_back();
  l2.pop_front();

  cout<<*next(l2.begin(),2)<<endl; //to access the ith element //its like temp node ;

  l2.insert(next(l2.begin(),2),30);
  //l2.insert(next(l2.begin(),2),l.begin(),l.end()); //multiple item

  l2.erase(next(l2.begin(),3));
//   l2.erase(next(l2.begin(),1),next(l2.begin(),4)); //multiple item erase er jonno 2ta iterator deya lghbe .prothom ta begin ei hobe and 2nd iterator ta jototuk erase korte hbe tar porer value ta porjnto dite hobe.like 1 theke 4 dile 1 theke 3 pojonto delete hobe. 

replace(l2.begin(),l2.end(),70,60); // shuru theke sesh porjnto itartor cholbe,jototgula 70 value pabe ta 60 diye replace hobe.

auto it=find(l2.begin(),l2.end(),60); //iterator return kore.value na paile iterator alwys end e thakbe.

it==l2.end()?cout<<"not found"<<endl:cout<<"found"<<endl; 
  for(int val:l2){
    cout<<val<<" ";
  }
  return 0;
}