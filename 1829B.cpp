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
      
      int a[n];
      
      for(int i=0; i<n; i++){
        cin>>a[i];
      }
      
      int mx = 0, c=0;
      
      
      
      for(int i=0; i<n; i++){
        if(a[i]==0){
          c++;
        }
        
        else{
          mx = max(c,mx);
          c=0;
        }
      }
      
      mx = max(c,mx);
      cout<<mx<<endl;
    }
}