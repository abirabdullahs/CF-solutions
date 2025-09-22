#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      
      if(a+b == c || b+c ==a || a+c == b) cout<<"yes"<<endl;
      else cout<<"NO"<<endl;
    
    
    }
    
}