#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    int c=0;

    for (int i=0; i<n; i++){
        cin>>a[i];
        b[i] = 5 - a[i];
        if(b[i]>=k) c++;
    }

    cout<<c/3<<endl;
    
}