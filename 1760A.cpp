#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a,b,c;
        
        cin>>a>>b>>c;
        
       int mn = min(a,min(b,c));
      int  mx = max(a,max(b,c));
        
        if(a!=mn && a!=mx) cout<<a<<endl;
        else if(b!=mn && b!=mx) cout<<b<<endl;
        else cout<<c<<endl;
    }
}