#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin>>n;
        
        int a[n];
        
        for(int i=0; i<n; i++){
          cin>>a[i];
        }
        
        if(a[1]==a[2] && a[0]!=a[1]){
          cout<<1<<endl;
          continue;
        }
        
        else if(a[n-2]==a[n-3] && a[n-1]!=a[n-2]){
          cout<<n<<endl;
          continue;
        }
        
        else{
          
          for(int i=1; i<n-1; i++){
            if(a[i-1]==a[i+1] && a[i]!=a[i+1]){
              cout<<i+1<<endl;
            }
          }
        }
        
        
    }
}