#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--){
        string A;
    cin>>A;
    transform(A.begin(), A.end(), A.begin(), ::tolower);
 
    if(A == "yes") cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
}