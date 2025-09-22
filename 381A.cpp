#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    
    int f=0, l=n-1,i=1,s1=0,s2=0;
    
    while(f<=l){
        
        int r = max(a[f],a[l]);
        
        
        if(r==a[f])f++;
        else l--;
        
        if(i%2==1){
          s1 = s1+r;
        }
        
        else s2=s2+r;
        
        i++;
        
    }
    
    cout<<s1<<" "<<s2<<endl;
}