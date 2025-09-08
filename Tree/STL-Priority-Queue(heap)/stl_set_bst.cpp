#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<int>bst;
  int n;cin>>n;
  while(n--){
    int val;cin>>val;
    bst.insert(val); //O(logN)
  }

  for( int x:bst){  
    cout<<x<<" ";
  }

  cout<<endl;
  // othoba iterator diyeo print kora jai karon bst te index nei
   
  for(auto it=bst.begin();it!=bst.end();it++){
    cout<<*it<<" ";
  }

  cout<<endl;
  // kono value ache kina check
  if(bst.count(5))
    cout<<"ache"<<endl;
  else 
    cout<<"nai"<<endl; 
   
   bst.erase(100) ;
   for(auto it=bst.begin();it!=bst.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;

  cout<<bst.size()<<endl;
  cout<<bst.empty()<<endl;

  if(bst.find(9)!=bst.end())
    cout<<"found";
  else
    cout<<"not found" ; 

//(find vs count)

// find(x) → একটা iterator রিটার্ন করে।

// যদি element থাকে → সেই element এর iterator দেয়।

// না থাকলে → s.end() রিটার্ন করে।

// count(x) → শুধু সংখ্যা রিটার্ন করে (0 বা 1)।

//তাই যদি শুধু check করতে চাও element আছে কিনা, তবে count() বেশি ছোট ও clean code দেয়।
// আর যদি element এর iterator/position দরকার হয় (যেমন erase করতে, বা পরের element access করতে) তবে find() ব্যবহার করতে হবে।  

  return 0;
}




// duplicate value remove kore dei.
// behind the scene Balance binary search tree maintain kore 
//sorted kore rakhe karon Inorder traversal kore
//set ke reverse kora jaina
//complexity -O(logN) karon alway balance bst maintain hoi.