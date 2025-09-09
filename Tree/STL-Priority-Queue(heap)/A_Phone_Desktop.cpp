#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int x,y;cin>>x>>y;
    
    int screen_for_y=ceil(float(y)/2);
    
    int extra_screen=0;
    int num_of_cell_for_x_in_y;


    if(screen_for_y>0){
         num_of_cell_for_x_in_y=(screen_for_y*15)-(y*4);
    }else{
        
        cout<<ceil(float(x)/15)<<endl;
        continue;
    }
    
    
    int remaining_cell_for_x=x - num_of_cell_for_x_in_y;
    if(remaining_cell_for_x>0){
        extra_screen=ceil(float(remaining_cell_for_x)/15);
    }

    

    
     cout<< screen_for_y+extra_screen<<endl;
  } 
 return 0;
}