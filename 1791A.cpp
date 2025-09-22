#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        char a;
        cin>>a;
        string s = "codeforces";
        
        if(s.find(a)!=string::npos)cout<<" yes"<<endl;
        else cout<<"no"<<endl;
    }
}