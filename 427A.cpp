#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int t;
    cin>>t;
    
    int a[t];
    
    int sum = 0,c=0;
    
    for(int i=0; i<t; i++){
      cin>>a[i];
      
      if(a[i]==-1 && sum<=0) {
        c++;
        sum=0;
        continue;
      }
      
      sum=sum+a[i];
    }
    
    
    
    cout<<c<<endl;
    
}