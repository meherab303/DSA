#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    bool flag=false;
    
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
       while(l<=r){
            int mid=(l+r)/2;
        if(v[mid]==v[i]){
            cout<<"YES";
            flag=true;
            break;
        }else if(v[mid]>v[i]){
            r=mid-1;
        }else{
            l=mid+1;
        }
       }
        
      if(flag)break;
        
    }
    if(flag!=true){
        cout<<"NO";
    }
    

    return 0;
}



// Problem Statement

// You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 100000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.
// Sample Input 

// 5
// 1 2 3 4 5
// Sample Output 

// NO