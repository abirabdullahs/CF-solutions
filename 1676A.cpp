#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
      string A;
      cin>>A;
      
      int a[6];
      int s1=0,s2=0;
      
      for (int i=0; i<6; i++){
        a[i]=A[i]-'0';
        
        if(i<=2) s1=s1+a[i];
        else s2=s2+a[i];
      }
      
      if(s1==s2) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
    
    
    
    
}