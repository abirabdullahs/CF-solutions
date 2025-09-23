#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>> t;
    while(t--){
        int x,y,n;

        cin>>x>>y>>n;
        
       int r = x * ((n-y)/x) + y;

       cout<<r<<endl;
    }
}