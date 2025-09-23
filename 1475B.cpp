#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      if(n<2020){
        cout<<"NO"<<endl;
        continue;
      }
      int c=0;
      int r = n;
      while(n>=2020){
        n = n-2020;
        c++;
      }
      
      if(c>=n){
        cout<<"YES"<<endl;
      }
      
      else cout<<"NO"<<endl;
    }
  
}