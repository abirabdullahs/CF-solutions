#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int a,b;
      cin>>a>>b;
      
      int r = (a-b)>0? a-b : b-a;
      
      cout<<(r+9)/10<<endl;
    }
    
    
    
    
}