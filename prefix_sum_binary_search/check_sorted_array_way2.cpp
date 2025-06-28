#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                sorted=false;
                break;
            }
        }
       cout<<(sorted?"YES":"NO")<<endl; //cout << sorted ? "YES" : "NO" << endl;এভাবে লিখলে ঠিকমতো কাজ করে না, কারণ cout << এর precedence (অগ্রাধিকার) ? : এর চেয়ে বেশি — ফলে compiler ভুলভাবে ব্যাখ্যা করে।C++ এটাকে ব্যাখ্যা করে এভাবে:( cout << sorted ) ? "YES" : "NO" << endl;
       // এখানে cout << sorted প্রথমে execute হয় (যেটা হয় cout << true → 1), তারপর ? "YES" : "NO" — যেটা আলাদাভাবে কিছুই করে না। তাই তুমি যেটা চাইছো সেটা হয় না।
      


    }
    return 0;
}
