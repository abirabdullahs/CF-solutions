#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    string s;

    cin>>n;
    cin>>s;

    int mx =0, idx=-1;

    for (int i=0; i<n-1; i++){
        int c=0;
        for(int j=i+1; j<n-1; j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]) c++;
        }

        if(c>mx){
            mx = c;
            idx = i;
        }
    }

    if(idx==-1){
        cout<<s[0]<<s[1]<<endl;
    }
    else cout<<s[idx]<<s[idx+1]<<endl;
}