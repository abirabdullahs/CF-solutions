#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int a[n];

        for (int i=0; i<n; i++){
            cin>>a[i];
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n);

        int c=1;
        int mx = 0;

        for (int i=0; i<n-1; i++){
            if(a[i+1]-a[i]<=k)c++;

            else {
                mx = max(mx,c);
                c=1;
            }
        }

        mx = max(mx,c);

        cout<<n-mx<<endl;
    }
}