#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    int n,k;
    cin>>n>>k;
 
    int total = 240;
 
    int remaining = total - k;
 
    int c=0;
 
    for (int i=1; i<=n; i++){
        remaining = remaining - 5*i;
         if(remaining<0) break;
        c++;
       
    }
 
    cout<<c<<endl;
 
    
}