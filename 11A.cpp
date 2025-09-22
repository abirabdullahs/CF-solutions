#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    long long a,d;
    cin>>a>>d;
    long long arr[a];
    long long c=0;
    
    for (int i=0; i<a; i++){
      cin>>arr[i];
    }
    
    for (int i=0; i<a-1; i++){
      if (arr[i]>=arr[i+1]){
        
         long long x = ceil(1.0*(arr[i]-arr[i+1]+1)/d);
         arr[i+1] = arr[i+1]+x*d;
         c+=x;
      }
      
      
    }
    
    cout<<c;
}